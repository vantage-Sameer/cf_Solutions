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

        vector<ll> b(n), ans(n);

        for (auto &x : b) cin >> x;

        ans[0] = 1;

        ll val = 1;

        for (int i = 1; i < n; i++){
            if ((b[i] - 1)/b[i - 1] == val) ans[i] = ans[i - 1];

            else {
                ans[i] = ans[i - 1] + 1;
                val++;
            }
        }

        for (auto &x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}