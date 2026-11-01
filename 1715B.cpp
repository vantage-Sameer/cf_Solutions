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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll mn = b*k;
        ll mx = mn + (k - 1)*n;

        if (s < mn || s > mx){
            cout << -1 << endl;
            continue;
        }

        vector<ll> ans(n, 0);

        ans[0] = mn;

        ll rem = s - mn;

        for (int i = 0; i < n && rem > 0; i++){
           
            ans[i] += min(rem, k - 1);
            rem -= min(rem, k - 1);
        }

        for (auto &x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}