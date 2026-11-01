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
        ll n, p;
        cin >> n >> p;

        vector<ll> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        vector<pair<ll, ll>> pp(n);

        for (ll i = 0; i < n; i++){

            pp[i]. first = b[i];

            pp[i].second = a[i];
        }

        sort(pp.begin(), pp.end());

        ll cost = p, bal = n - 1, idx = 0;

        while (bal > 0 && idx < n && pp[idx].first < p){

            ll take = min(bal, pp[idx].second);

            cost += take*pp[idx].first;
            
            bal -= take;

            idx++;
        }

        cost += bal*p;

        cout << cost << endl;
    }

    return 0;
}