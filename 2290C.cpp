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

        map<int, int> mp;

        for (auto &x : a){
            cin >> x;
            mp[x]++;
        }

        int ans = mp.size();

        for (auto &x : mp){
            x.second--;

            if (x.second > 0) ans++;
        }

        cout << ans << endl;

        map<int, int> miguel;

        for (auto &x : a) miguel[x]++;

        sort(a.begin(), a.end());

        a.erase(unique(a.begin(), a.end()), a.end());

        vector<int> pp = a;

        for (auto &x : miguel) x.second--;

        vector<int> pq;

        for (auto &x : miguel){
            if (x.second > 0) pq.pb(x.first);

            x.second--;

            for (int i = 0; i < x.second; i++) pp.pb(x.first);
        }

        sort(pq.rbegin(), pq.rend());

        for (auto &x : pq) pp.pb(x);

        for (auto &x : pp) cout << x << " ";

        cout << endl;
    }

    return 0;
}