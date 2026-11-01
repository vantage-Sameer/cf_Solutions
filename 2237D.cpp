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
        cin >> n;

        string s;
        cin >> s;

        ll total = 1LL*n*(n + 1)/2;

        vector<ll> f(3, 0);

        f[0] = 1;

        int pref = 0;

        ll z = 0, odd = 0;

        for (auto c : s){
            if (c == '0') pref = (pref + 1)%3;

            else pref = (pref + 2)%3;

            z += f[pref];
            f[pref]++;
        }

        int i = 0;

        while (i < n){
            int j = i;
            while (j < n - 1 && s[j] != s[j + 1]) j++;

            ll l = j - i + 1;

            ll a = (l + 1)/2, b = l/2;

            odd += a*(a + 1)/2 + b*(b + 1)/2;

            i = j + 1;
        }

        ll b = odd - n;

        ll ans = total - z - b;

        cout << ans << endl;
    }

    return 0;
}