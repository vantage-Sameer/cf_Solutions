#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<ll>> a(n + 2, vector<ll>(m + 2, 0));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) cin >> a[i][j]; 
    }

    vector<vector<ll>> dptl(n + 2, vector<ll>(m + 2, 0)),dpbr(n + 2, vector<ll>(m + 2, 0));

    vector<vector<ll>> dpbl(n + 2, vector<ll>(m + 2, 0)), dptr(n + 2, vector<ll>(m + 2, 0));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) dptl[i][j] = a[i][j] + max(dptl[i - 1][j], dptl[i][j - 1]);
    }

    for (int i = n; i >= 1; i--){
        for (int j = m; j >= 1; j--) dpbr[i][j] = a[i][j] + max(dpbr[i + 1][j], dpbr[i][j + 1]);
    }

    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= m; j++) dpbl[i][j] = a[i][j] + max(dpbl[i + 1][j], dpbl[i][j - 1]);
    }

    for (int i = 1; i <= n; i++){
        for (int j = m; j >= 1; j--) dptr[i][j] = a[i][j] + max(dptr[i - 1][j], dptr[i][j + 1]);
    }

    ll ans = 0;

    for (int i = 2; i < n; i++){
        for (int j = 2; j < m; j++){

            ll u = dptl[i - 1][j] + dpbr[i + 1][j] + dpbl[i][j - 1] + dptr[i][j + 1];

            ll v = dptl[i][j - 1] + dpbr[i][j + 1] + dpbl[i + 1][j] + dptr[i - 1][j];

            ans = max({ans, u, v});
        }
    }

    cout << ans << endl;

    return 0;
}