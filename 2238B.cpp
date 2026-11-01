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
        ll n;
        cin >> n;

        ll ans = 0;

        for (ll i = 1; i <= n; i++) ans += 1LL*(n/i)*(n/i);

        cout << ans << endl;
    }

    return 0;
}