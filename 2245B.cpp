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
        int n;
        ll c;
        
        cin >> n >> c;

        vector<ll> a(n), add;

        ll ans = 0;

        for (auto &x : a){
            cin >> x;
            ans += x - c;

            if (x < c) add.pb(c - x);
        }

        sort(add.rbegin(), add.rend());

        int val = min((int)add.size(), n/2);

        for (int i = 0; i < val; i++) ans += add[i];

        cout << ans << endl;
    }

    return 0;
}