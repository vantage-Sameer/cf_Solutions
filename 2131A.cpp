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

        int ans = 0;

        for (int i = 0; i < n; i++){
            if (a[i] > b[i]) ans += a[i] - b[i];
        }

        cout << ans + 1 << endl;
    }

    return 0;
}