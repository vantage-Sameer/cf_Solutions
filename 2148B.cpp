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
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int ans = n + m, temp;

        while (n--) cin >> temp;

        while (m--) cin >> temp;

        cout << ans << endl;
    }

    return 0;
}