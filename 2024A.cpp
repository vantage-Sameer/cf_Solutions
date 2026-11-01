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
        ll a, b;
        cin >> a >> b;

        if (a >= b) cout << a << endl;

        else if (b >= 2*a) cout << 0 << endl;

        else cout << b - 2*(b - a) << endl;
    }

    return 0;
}