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
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        s = " " + s;

        vector<int> nz(n + 1), no(n + 1), u(n + 1), v(n + 1), pz(n + 1), po(n + 1);

        for (int i = 1; i <= n; i++) {
            char c = (i%2 == 1) ? '0' : '1', d = (i%2 == 1) ? '1' : '0';

            nz[i] = (s[i] != c);

            no[i] = (s[i] != d);
        }

        for (int i = 1; i <= n; i++){
            if (nz[i] && (i == 1 || !nz[i - 1])) u[i] = 1;

            if (no[i] && (i == 1 || !no[i - 1])) v[i] = 1;

            pz[i] = pz[i - 1] + u[i];

            po[i] = po[i - 1] + v[i];
        }

        while (q--){
            int l, r, k;
            cin >> l >> r >> k;

            int x = pz[r] - pz[l - 1], y = po[r] - po[l - 1];

            if (l > 1 && nz[l] && nz[l - 1]) x++;

            if (l > 1 && no[l] && no[l - 1]) y++;

            cout << (min(x, y) <= k ? "YES\n" : "NO\n");
        }
    }

    return 0;
}