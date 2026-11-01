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

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        map<int, vector<int>> mp;

        for (int i = 0; i < n - 4; i++) mp[a[i] + a[i + 2] - a[i + 4]].pb(i);

        ll ans = 0;

        for (auto &x : mp){
            int s = (int)x.second.size();

            for (int i = 0; i < s; i++){

                ll cnt = i;

                for (int j = max(0, i - 4); j < i; j++){
                    int diff = x.second[i] - x.second[j];

                    if (diff == 2 || diff == 4) cnt--;
                }

                ans += cnt;
            }
        }

        cout << ans << endl;
    }

    return 0;
}