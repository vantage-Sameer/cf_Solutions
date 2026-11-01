#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    bool adj[100][100] = {0};

    while (m--){
        int x, y;
        cin >> x >> y;

        x--; y--;

        adj[x][y] = adj[y][x] = true;
    }

    ll ans = (ll)(1e18);

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (adj[i][j] && adj[j][k] && adj[i][k]) ans = min(ans, 1LL*(a[i] + a[j] + a[k]));   
            }
        }
    }

    if (ans == 1e18) cout << -1 << endl;

    else cout << ans << endl;

    return 0;
}