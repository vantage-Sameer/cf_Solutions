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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        multiset<ll> res;
        ll sum = 0;

        for (int i = 0; i < m - 1; i++){
            res.insert(a[i]);
            sum += a[i];
        }

        ll ans = LLONG_MIN;

        for (int i = m - 1; i < n; i++){

            ans = max(ans, m*a[i] - sum);

            if (m > 1 && !res.empty() && a[i] < *res.rbegin()){

                auto it = prev(res.end());

                sum -= *it;
                res.erase(it);

                res.insert(a[i]);
                sum += a[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
