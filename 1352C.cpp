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

        ll ans = k;

        ll q = k/n;

        while (q){

            ll temp = (ans + q)/n - ans/n;

            ans += q;

            q = temp;
        }

        cout << ans << endl;
    }

    return 0;
}