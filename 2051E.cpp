
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        sort(a.begin(), a.end());

        sort(b.begin(), b.end());

        vector<int> c;

        for (auto &x : a) c.pb(x);

        for (auto &x : b) c.pb(x);

        sort(c.begin(), c.end());

        int ans = 0;

        for (auto &x : c){
            int val = n - (lower_bound(b.begin(), b.end(), x) - b.begin());

            int K = lower_bound(a.begin(), a.end(), x) - a.begin() - (lower_bound(b.begin(), b.end(), x) - b.begin());

            if (K <= k) ans = max(ans, val*x);
        }

        cout << ans << endl;
    }

    return 0;
}
