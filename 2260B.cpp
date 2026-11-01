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
        ll x, y, k;
        cin >> x >> y >> k;

        ll r = y - x, ans = 0;

        for (ll i = 0; i < min(r, k); i++) ans += (y + i)%(x + i);

        if (k > r) ans += r*(k - r);

        cout << ans << endl;
    }

    return 0;
}