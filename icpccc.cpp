#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    ll n;
    cin >> n >> q;

    vector<ll> pw;

    for (int i = 0; i < 31; i++){

        ll p = 1LL << i;

        if (p <= n) pw.pb(p);
    }

    while (q--){
        ll s, t;
        cin >> s >> t;

        if (s == t){
            cout << 0 << endl;
            continue;
        }

        const ll LIM = (1LL << 62);

        ll ans = LIM;

        if ((s & t) == 0) ans = s + t;

        for (ll p : pw){
            if ((s & p) == 0 && (t & p) == 0){
                ans = min(ans, s + t + 2*p);
                break;  
            }
        }
        
        vector<ll> a, b;

        for (ll p : pw){
            if ((s & p) == 0){
                a.pb(p);
                if ((int)a.size() == 2) break;
            }
        }

        for (ll p : pw){
            if ((t & p) == 0){
                b.pb(p);
                if ((int)b.size() == 2) break;
            }
        }

        for (ll p : a){
            for (ll r : b) if (p != r) ans = min(ans, s + t + 2*p + 2*r);
        }

        if (ans == LIM) cout << -1 << endl;

        else cout << ans << endl;
    }

    return 0;
}