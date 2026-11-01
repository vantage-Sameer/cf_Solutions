#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;

        ll a = (r - 1)*m + (c - 1)*(n - r + 1);

        ll ans = 1, b = 2;

        while(a > 0){
            if (a%2 == 1) ans = (ans*b)%MOD;
            b = (b*b)%MOD;
            a >>= 1;
        }

        cout << ans << endl;
    }

    return 0;
}