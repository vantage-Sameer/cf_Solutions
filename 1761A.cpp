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
        int n, a, b;
        cin >> n >> a >> b;

        if (a == b && a == n) cout << "YES" << endl;

        else if (a + b <= n - 2) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}