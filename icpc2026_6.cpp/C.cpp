#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        ll n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) break;

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        ll ans = (m/7)*2;

        if (m%7 >= 6) ans++;

        sort(a.begin(), a.end());

        a.erase(unique(a.begin(), a.end()), a.end());

        for (auto &x : a){
            if (x <= m && x%7 != 6 && x%7 != 0) ans++;
        }

        cout << m - ans << endl;
    }

    return 0;
}