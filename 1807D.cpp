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
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);

        for (auto &x : arr) cin >> x;

        vector<ll> pref(n);

        pref[0] = arr[0];

        for (ll i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];

        while(q--){
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum = pref[r - 1] - pref[l - 1] - arr[l - 1], d = r - l + 1;

            ll num = pref[n - 1] - sum + d*k;

            if (num%2 == 1) cout << "YES" << endl;

            else cout << "NO" << endl;
        }
    }

    return 0;
}