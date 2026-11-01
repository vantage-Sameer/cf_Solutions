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
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);

        for (auto &v : a) cin >> v;

        map<pair<ll,ll>, ll> freq;

        ll count = 0;

        for (auto v : a){
            ll p = v%x, q = v%y;

            ll val = (x - p)%x;

            count += freq[{val, q}];

            freq[{p, q}]++;
        }

        cout << count << endl;
    }

    return 0;
}