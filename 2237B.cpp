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

        vector<ll> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        vector<vector<int>> c(n + 1);

        bool flag = true;

        for (int i = 0; i < n; i++){

            auto it = lower_bound(b.begin(), b.end(), a[i]);

            if (it == b.end()){
                flag = false;
                break;
            }

            c[it - b.begin() + 1].pb(i);
        }

        if (!flag){
            cout << -1 << endl;
            continue;
        }

        priority_queue<int, vector<int>, greater<int>> pq;

        vector<int> p;

        for (int i = 1; i <= n; i++){

            for (int x : c[i]) pq.push(x);

            if (pq.empty()){
                flag = false;
                break;
            }

            p.pb(pq.top());

            pq.pop();
        }

        if (!flag){
            cout << -1 << endl;
            continue;
        }

        ll ans = 0;

        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++) ans += (p[i] > p[j]);
        }
        
        cout << ans << endl;
    }
}