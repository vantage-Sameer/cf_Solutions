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
        int x, y, n;
        cin >> x >> y >> n;

        int p = x*(n/x);

        if (p + y <= n) cout << p + y << endl;

        else cout << p - x + y << endl;
    }

    return 0;
}