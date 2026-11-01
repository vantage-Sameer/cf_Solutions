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
        ll n, k, x;
        cin >> n >> k >> x;

        ll mn = (k*(k+1))/2, mx = (k*(2*n - k + 1))/2;

        if (x >= mn && x <= mx) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}