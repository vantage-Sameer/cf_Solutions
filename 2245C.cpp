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
        ll k;
        cin >> n >> k;

        ll val = k^n, mx = 1;

        while (mx <= n - 1) mx *= 2;

        if (val >= mx){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> s(max(0, n - 1), 0);

        if (n > 1){

            if (val <= n - 1) s[n - 2] = val;

            else{
                s[n - 2] = n - 1;
                s[n - 3] = val^(n - 1);
            }
        }

        vector<int> u(n), r(n, -1);

        for (int i = 0; i < n; i++) u[i] = upper_bound(s.begin(), s.end(), i) - s.begin();

        for (int i = 0; i < n - 1; i++) r[s[i]] = i + 1;

        vector<int> p(n, -1);

        vector<int> par(n + 1);

        for (int i = 0; i <= n; i++) par[i] = i;

        function<int(int)> find = [&](int x){
            
            if (x < 0) return -1;

            if (par[x] == x) return x;

            return par[x] = find(par[x]);
        };

        auto er = [&](int x){
            par[x] = find(x - 1);
        };

        for (int i = 0; i < n; i++){

            if (r[i] == -1) continue;

            p[r[i]] = i;

            er(r[i]);
        }

        for (int i = n - 1; i >= 0; i--){

            if (r[i] != -1) continue;

            int idx = find(u[i]);

            p[idx] = i;

            er(idx);
        }

        for (auto &x : p) cout << x << " ";

        cout << endl;
    }

    return 0;
}