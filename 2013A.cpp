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
        ll n, x, y;
        cin >> n >> x >> y;

        ll mn = min(x, y);

        if (n%mn == 0) cout << n/mn << endl;

        else cout << n/mn + 1 << endl;
    }

    return 0;
}