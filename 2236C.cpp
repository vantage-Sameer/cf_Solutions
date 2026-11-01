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
        ll a, b, x;
        cin >> a >> b >> x;

        int count = 0;

        vector<pair<ll, int>> ppa, ppb;

        ppa.pb({a, count});

        while (a){
            a /= x;
            count++;

            ppa.pb({a, count});
        }

        count = 0;

        ppb.pb({b, count});

        while (b){
            b /= x;
            count++;

            ppb.pb({b, count});
        }

        ll mn = 1e18;

        for (int i = 0; i < (int)ppa.size(); i++){
            for (int j = 0; j < (int)ppb.size(); j++){
                mn = min(mn, (ll)ppa[i].second + ppb[j].second + llabs(ppa[i].first - ppb[j].first));
            }
        }

        cout << mn << endl;
    }

    return 0;
}