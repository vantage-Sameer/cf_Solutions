#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, d, h;
        cin >> n >> d >> h;

        vector<ll> y(n);

        for (auto &x : y) cin >> x;

        ld ans = 0;

        for (ll i = 0; i < n - 1; i++){
            ld del = y[i + 1] - y[i];

            if (del >= (ld)h) ans += ((ld)d)*((ld)h)/2;

            else ans += (((ld)d)*((ld)h)/2)*(1 - (1 - del/(ld)h)*(1 - del/(ld)h));
        }

        ans += ((ld)d)*((ld)h)/2;

        cout << fixed << setprecision(10) << ans << endl;
    }

    return 0;
}