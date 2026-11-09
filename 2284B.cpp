#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        if (k < n){
            int sum = 0;

            for (int j = n - k; j < n; j++) sum += a[j];

            if (a[n - k - 1]*k >= sum){
                cout << "NO" << endl;
                continue;
            }
        }

        cout << "YES" << endl;

        for (int j = n - k; j < n; j++) cout << a[j] << " ";

        for (int j = n - k - 1; j >= 0; j--) cout << a[j] << " ";

        cout << endl;
    }

    return 0;
}