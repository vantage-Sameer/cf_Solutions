#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int l1 = LLONG_MIN, r1 = LLONG_MAX;

    while (n--){
        int l, r;
        cin >> l >> r;

        r1 = min(r1, r);
        l1 = max(l1, l);
    }

    int m;
    cin >> m;

    int l2 = LLONG_MIN, r2 = LLONG_MAX;

    while (m--){
        int l, r;
        cin >> l >> r;

        r2 = min(r2, r);
        l2 = max(l2, l);
    }

    cout << max({0LL, l2 - r1, l1 - r2}) << endl;

    return 0;
}