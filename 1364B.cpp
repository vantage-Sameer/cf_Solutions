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

        vector<int> ans;

        ans.pb(a[0]);

        ans.pb(a[1]);

        for (int i = 2; i < n; i++){
            int k = (int)ans.size();

            if (ans[k - 1] >= ans[k - 2] && ans[k - 1] <= a[i]) ans[k - 1] = a[i];

            else if (ans[k - 1] <= ans[k - 2] && ans[k - 1] >= a[i]) ans[k - 1] = a[i];

            else ans.pb(a[i]);
        }

        cout << ans.size() << endl;

        for (auto &x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}