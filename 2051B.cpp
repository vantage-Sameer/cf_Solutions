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

        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int ans = 3*(n/(a + b + c));

        int bal = n - (a + b + c)*(n/(a + b + c));

        if (bal == 0){
            cout << ans << endl;
            continue;
        }

        if (bal <= a) ans++;

        else if (bal <= a + b) ans += 2;

        else ans += 3;

        cout << ans << endl;

    }

    return 0;
}