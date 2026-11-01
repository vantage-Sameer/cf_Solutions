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
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (auto &x : arr) cin >> x;

        ll g1 = 0, g2 = 0;

        for (ll i = 0; i < n; i++){
            if (i%2 == 0) g1 = __gcd(g1, arr[i]);

            else g2 = __gcd(g2, arr[i]);
        }

        bool flag1 = true, flag2 = true;

        for (ll i = 0; i < n; i++){
            if (i%2 == 0 && arr[i]%g2 == 0) flag2 = false;

            if (i%2 == 1 && arr[i]%g1 == 0) flag1 = false;
        }

        if (flag1) cout << g1 << endl;

        else if (flag2) cout << g2 << endl;

        else cout << 0 << endl;
    }

    return 0;
}