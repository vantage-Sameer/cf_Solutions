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

        vector<int> p(n + 1), res;

        for (int i = 1; i <= n; i++){
            cin >> p[i];

            if (i != p[i]) res.pb(p[i]);
        }

        reverse(res.begin(), res.end());

        if (is_sorted(res.begin(), res.end())) cout << "YES\n";

        else cout << "NO\n";
    }

    return 0;
}