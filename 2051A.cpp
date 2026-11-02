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

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        int ans = a[n - 1];

        for (int i = 0; i < n - 1; i++){
            if (a[i] > b[i + 1]) ans += a[i] - b[i + 1];
        }

        cout << ans << endl;
    }

    return 0;
}