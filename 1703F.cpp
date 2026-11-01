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

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<pair<int, int>> pp;

        for (int i = 1; i <= n; i++){
            if (a[i] < i) pp.pb({i, a[i]});
        }

        ll ans = 0;

        for (int i = (int)pp.size() - 1; i >= 0; i--){

            int val = pp[i].second;

      
            int cnt = lower_bound(pp.begin(), pp.begin() + i, make_pair(val, -1)) - pp.begin();

            ans += cnt;
        }

        cout << ans << endl;
    }

    return 0;
}