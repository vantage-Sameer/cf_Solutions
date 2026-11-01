#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        map<int, int> mp;

        for (int i = 0; i < n; i++) mp[i - arr[i]]++;

        ll ans = 0;

        for (auto &x : mp) ans += (1LL*(x.second)*(x.second - 1))/2;

        cout << ans << endl;
    }

    return 0;
}