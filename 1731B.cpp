#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD (int)(1e9 + 7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        ll a = n, b = n + 1, c = 4LL*n - 1LL;

        if (n%3 == 0) a = a/3;

        else if (n%3 == 2) b = b/3;

        else c = c/3;

        ll ans = ((a*b)/2)%MOD;

        c = c%MOD;

        ans = (ans*c)%MOD;

        cout << (ans*2022)%MOD;

        cout << endl;
    }

    return 0;
}