#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    ll ans = 0;

    unordered_map<int, int> mp;

    mp[0] = 1;

    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; i++){
        pref[i] = (a[i - 1] + pref[i - 1])%n;

        if (pref[i] < 0) pref[i] += n;

        if (mp.count(pref[i])) ans += mp[pref[i]];

        mp[pref[i]]++;
    }

    cout << ans << endl;

    return 0;
}