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
        ll p, q, r;
        cin >> p >> q >> r;

        if (r != q && 2*q - r > 0 && (2*q - r)%p == 0) cout << "YES";

        else if (r == q && q%p == 0) cout << "YES";

        else if ((p + r)%2 == 0 && ((p + r)/2)%q == 0) cout << "YES";

        else if (q != p && 2*q - p > 0 && (2*q - p)%r == 0) cout << "YES";

        else if (q == p && q%r == 0) cout << "YES";

        else cout << "NO";

        cout << endl;
    }

    return 0;
}