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
        ll n;
        cin >> n;

        if (n == 2 || n%2 == 1){
            cout << -1 << endl;
            continue;
        }

        ll mx = n/4, mn;

        if (n%6 == 0) mn = n/6;

        else mn = (n + 5)/6;

        cout << mn << " " << mx << endl;
    }

    return 0;
}