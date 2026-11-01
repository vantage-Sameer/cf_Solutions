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
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        int a = 2*(x - arr[n - 1]), b = arr[0];

        int c = 0;

        for (int i = 0; i < n - 1; i++) c = max(c, arr[i + 1] - arr[i]);

        int ans = max({a, b, c});

        cout << ans << endl;
    }

    return 0;
}