#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<int, int> mp;

    int cnt = 0;

    while(n--){
        int x;
        cin >> x;

        if (mp.count(x) == 0) cnt++;

        mp[x]++;
    }

    cout << cnt << endl;

    return 0;
}