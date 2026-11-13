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
        int a, b, c;
        cin >> a >> b >> c;

        int p = max(a, max(b, c)), q = min(a, min(b, c));

        int r = a + b + c - p - q;

        if (2*r == p + q && p - q == 2) cout << "YES\n";

        else cout << "NO\n";
    }

    return 0;
}