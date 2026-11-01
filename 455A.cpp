#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    unordered_map<int, int> mp;

    for (auto &x : arr){
        cin >> x;
        mp[x]++;
    }

    int cap = *(max_element(arr.begin(), arr.end()));

    if (cap == 1){
        cout << mp[1] << endl;
        return 0;
    }

    if (cap == 2){
        cout << max(mp[1], mp[2]*2) << endl;
        return 0;
    }

    ll a = mp[1], b = mp[2]*2;

    ll c = a + mp[3]*3;

    for (int i = 4; i <= cap; i++){

        ll curr;

        if (mp.find(i) != mp.end()) curr = 1LL*mp[i]*i + max(a, b);
        
        else curr = max(a, b);

        a = b;
        b = c;
        c = curr;
    }

    cout << max(b, c) << endl;

    return 0;
}