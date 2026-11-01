#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (auto &x : a) cin >> x;

    ll res = a[0], mx = a[0];

    for (int i = 1; i < n; i++){
        mx = max(mx + a[i], a[i]);

        res = max(mx, res);
    }

    cout << res << endl;

    return 0;
}