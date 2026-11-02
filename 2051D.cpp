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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);

        int sum = 0;

        for (auto &z : a){
            cin >> z;
            sum += z;
        }

        int ans = 0;

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++){
            int L = sum - y - a[i], R = sum - x - a[i];

            ans += upper_bound(a.begin() + i + 1, a.end(), R) - lower_bound(a.begin() + i + 1, a.end(), L);
        }

        cout << ans << endl;
    }

    return 0;
}