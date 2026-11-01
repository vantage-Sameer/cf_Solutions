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
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        int gc = 0;

        vector<ll> curr(n, 0), lc(n, 0);

        while (m--){
            ll b, c;
            cin >> b >> c;

            b--;

            if (lc[b] != gc) {
                curr[b] = 0;
                lc[b] = gc;
            }

            curr[b] += c;

            if (a[b] + curr[b] > h){

                gc++;

                lc[b] = gc;

                curr[b] = 0;
            }
        }

        for (int i = 0; i < n; i++){
            if (lc[i] == gc) a[i] += curr[i];
        }

        for (auto &x : a) cout << x << " ";

        cout << endl;
    }

    return 0;
}