#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    vector<int> pref(n);

    while (q--){
        int l, r;

        cin >> l >> r;

        l--;

        r--;

        pref[l]++;

        if (r + 1 < n) pref[r + 1]--;
    }

    for (int i = 1; i < n; i++) pref[i] += pref[i - 1];

    sort(pref.begin(), pref.end());

    sort(a.begin(), a.end());

    ll ans = 0;

    for (int i = 0; i < n; i++) ans += (1LL*a[i])*(1LL*pref[i]);

    cout << ans << endl;

    return 0;
}