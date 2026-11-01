#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> fact;

    ll f = 6; 

    for (ll i = 4; ; i++){
        fact.pb(f);

        if (f > (ll)1e12/i) break;

        f *= i;
    }

    vector<pair<ll, int>> sub;

    int m = fact.size();

    for (int mask = 0; mask < (1 << m); mask++){
        ll sum = 0;
        int count = 0;

        for (int i = 0; i < m; i++){
            if (mask & (1 << i)){
                sum += fact[i];
                count++;
            }
        }

        sub.pb({sum, count});
    }

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll ans = __builtin_popcountll(n);

        for (auto x : sub){
            ll sum = x.first;
            int cnt = x.second;

            if (sum > n) continue;

            ans = min(ans, (ll)cnt + __builtin_popcountll(n - sum));
        }

        cout << ans << endl;
    }

    return 0;
}