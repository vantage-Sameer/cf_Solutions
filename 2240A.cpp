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
        int n, k;
        cin >> n >> k;

        ll ans = 0, sum = 1;

        while (sum <= n){
            ll val = min((ll)k, n/sum);

            ans += val;

            n = n - val*sum;

            sum = sum*2;
        }

        cout << ans << endl;
    }

    return 0;
}