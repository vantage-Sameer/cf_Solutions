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

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        if (k >= 3){
            cout << 0 << endl;
            continue;
        }

        int mn  = LLONG_MAX;

        sort(a.begin(), a.end());

        for (int i = 1; i < n; i++) mn = min(mn, a[i] - a[i - 1]);

        if (k == 1){

            cout << min(mn, a[0]) << endl;

            continue;
        }

        int d = mn;

        int ans = min(mn, a[0]);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j) continue;

                int diff = abs(a[j] - a[i]);

                auto it = lower_bound(a.begin(), a.end(), diff);

                if (it != a.end()) ans = min(ans, abs(*it - diff));

                if (it != a.begin()){
                    it--;
                    ans = min(ans, abs(*it - diff));
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}