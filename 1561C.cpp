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

        vector<pair<ll, ll>> pp;


        for (int i = 0; i < n; i++){
            int k;
            cin >> k;

            ll mx = 0;

            for (int i = 0; i < k; i++){
                ll x;
                cin >> x;

                mx = max(mx, x - i + 1);
            }
            pp.pb({mx, (ll)k});
        }

        sort(pp.begin(), pp.end());

        ll ans = pp[0].first, curr = ans;

        for (int i = 0; i < n; i++){

            if (curr < pp[i].first){
                ans += pp[i].first - curr;
                curr = pp[i].first;
            }

            curr += pp[i].second;
        }

        cout << ans << endl;
    }

    return 0;
}