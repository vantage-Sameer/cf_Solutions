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

        vector<int> L(n), R(n);

        for (int i = 0; i < n; i++){
            L[i] = (i - 1 + n)%n;
            R[i] = (i + 1)%n;
        }

        vector<bool> flag(n, true);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n; i++) pq.push(make_pair(a[i], i));

        ll ans = 0;

        int cnt = n;

        while (cnt > 1){

            while (!pq.empty()){

                pair<int, int> curr = pq.top();

                int x = curr.first, id = curr.second;

                if (!flag[id] || x != a[id]) pq.pop();

                else break;
            }

            pair<int, int> curr = pq.top();

            int x = curr.first, id = curr.second;

            pq.pop();

            int l = L[id], r = R[id], keep;

            if (a[l] <= a[r]) keep = l;

            else keep = r;

            ans += a[keep];

            a[keep] = max(a[keep], a[id]);

            pq.push(make_pair(a[keep], keep));

            R[L[id]] = R[id];

            L[R[id]] = L[id];

            flag[id] = false;

            cnt--;
        }

        cout << ans << endl;
    }

    return 0;
}