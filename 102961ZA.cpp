#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<ll> a(n);

    for (auto &y : a) cin >> y;

    ll ans = 0;

    unordered_map<ll, ll> mp;

    mp[0] = 1;

    vector<ll> pref(n + 1, 0);

    for (int i = 1; i <= n; i++){
        pref[i] = (ll)a[i - 1] + pref[i - 1];

        if (mp.count(pref[i] - x)) ans += mp[pref[i] - x];

        mp[pref[i]]++;
    }

    cout << ans << endl;

    return 0;
}