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
        ll a, b;
        cin >> a >> b;

        ll ans = LLONG_MAX;

        for (ll i = 0; i <= 40; i++){
            ll B = b + i;

            if (B == 1) continue; 

            ll curr = i, x = a;

            while (x > 0){
                x /= B;
                curr++;
            }

            ans = min(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}