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

        cout << ((a + b >= 10 || b + c >= 10 || a + c >= 10) ? "YES\n" : "NO\n");
    }

    return 0;
}