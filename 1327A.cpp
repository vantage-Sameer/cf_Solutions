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
        ll n, k;
        cin >> n >> k;

        if ((k - n)%2 != 0 || n < k*k) cout << "NO" << endl;

        else cout << "YES" << endl;
    }

    return 0;
}