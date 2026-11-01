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
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);

        ll sum = 0, ans = 0;

        for (auto &y : arr){
            cin >> y;

            sum += y;

            ans += (y + x - 1)/x;
        }

        sum = (sum + x - 1)/x;

        cout << sum << " " << ans << endl;
    }

    return 0;
}