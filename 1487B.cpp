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
        int n, k;
        cin >> n >> k;

        if (n%2 == 0){
            if (k%n != 0) cout << k%n << endl;

            else cout << n << endl;

            continue;
        }

        int l = (n/2)*n;

        k %= l;

        if (k == 0) k = l;

        int ban = 1;

        int y = k - (n/2 + 1);

        if (y < 0) ban = 0;

        else ban += y/(n/2);

        int p = k + ban;

        cout << (p%n ? p%n : n) << endl;
    }

    return 0;
}