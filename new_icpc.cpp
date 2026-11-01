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
        int n;
        cin >> n;

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        if(n == 1){
            cout << 0 << endl;
            continue;
        }

        vector<ll> g(n);

        g[n - 1] = abs(a[n - 1]);

        for(int i = n - 2; i >= 0; i--) g[i] = __gcd(g[i + 1], abs(a[i]));

        if(g[1] == 0){

            ll mn = *min_element(a.begin(), a.end()), mx = *max_element(a.begin(), a.end());

            cout << mx - mn << endl;

            continue;
        }

        ll x = a[n - 1];

        vector<pair<ll, ll>> pp;

        ll MN = x, MX = x;

        for(int i = 0; i < n - 1; i++){

            ll d = g[i + 1];

            if(d == 0){
                MN = min(MN, a[i]);
                MX = max(MX, a[i]);
            }

            else{
                ll r = ((x - a[i])%d + d)%d;

                ll l = x - r;
                ll h = l + d;

                pp.pb({l, h});
            }
        }

        sort(pp.begin(), pp.end());

        ll mn = MN;
        ll mx = MX;

        for(auto p : pp){
            mn = min(mn, p.first);
            mx = max(mx, p.first);
        }

        ll ans = mx - mn;

        mx = MX;

        for(int i = 0; i < (int)pp.size(); i++){

            mx = max(mx, pp[i].second);

            ll z = MN;

            if(i < (int)pp.size() - 1) z = min(z, pp[i + 1].first);

            ans = min(ans, mx - z);
        }

        cout << ans << endl;
    }

    return 0;
}