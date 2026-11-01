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
        int n, m;
        cin >> n >> m;

        vector<int> a(n + 1), b(m);

        for (int i = 1; i <= n; i++) cin >> a[i];

        for (auto &x : b) cin >> x;

        vector<int> c(n + 1);

        for (auto &x : b) c[x] = 1;

        vector<vector<ll>> dp(n + 1, vector<ll>(2));

        for (int i = 1; i <= n; i++){
            for (int j = 0; j < 2; j++){
                ll p = (j ? -1LL*a[i] : 1LL*a[i]);

                dp[i][j] = dp[i - 1][j] + p;

                if (c[i]){
                    ll q = (j ? 1LL*a[i] : -1LL*a[i]);
                    dp[i][j] = max(dp[i][j], dp[i - 1][j^1] + q);
                }
            }
        }

        cout << dp[n][0] << endl;
    }

    return 0;
}