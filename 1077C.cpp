#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> arr(n);

    unordered_map<ll, int> mp;

    ll sum = 0;

    for (auto &x : arr){
        cin >> x;
        sum += x;
        mp[x]++;
    }

    vector<int> ans;

    for (int i = 0; i < n; i++){
        mp[arr[i]]--;

        ll temp = sum - arr[i];

        if (temp % 2 == 1){
            mp[arr[i]]++;
            continue;
        }

        if (mp[temp/2] > 0) ans.pb(i + 1);

        mp[arr[i]]++;
    }

    cout << ans.size() << endl;

    for (auto &x : ans) cout << x << " ";

    cout << endl;

    return 0;
}