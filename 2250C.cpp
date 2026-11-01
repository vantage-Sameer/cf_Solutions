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

        vector<int> l(n + 1), r(n + 1), u(n + 1), v(n + 1);

        for (int i = 1; i <= n; i++) cin >> l[i] >> r[i] >> u[i] >> v[i];

        bool flag = false;

        for (int m = n; m >= 1; m--){

            int curr = 1;

            for (int i = 1; i <= n && curr <= m; i++){
                int L = curr, R = m - curr + 1;

                if (!(l[i] <= L && L <= r[i]) && !(u[i] <= R && R <= v[i])) curr++;
            }

            if (curr == m + 1){
                cout << m << endl;
                flag = true;
                break;
            }
        }

        if (!flag) cout << 0 << endl;
    }

    return 0;
}