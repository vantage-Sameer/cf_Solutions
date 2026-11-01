#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll power(ll n, ll p){
    ll cnt = 0;

    while (n > 0){
        n /= p;
        cnt += n;
    }

    return cnt;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, b;
    cin >> n >> b;

    ll ans = LLONG_MAX;

    for (ll p = 2; p*p <= b; p++){

        if (b%p == 0){

            ll e = 0;

            while (b%p == 0){
                b /= p;
                e++;
            }

            ans = min(ans, power(n, p)/e);
        }
    }

    if (b > 1) ans = min(ans, power(n, b));

    cout << ans << "\n";

    return 0;
}