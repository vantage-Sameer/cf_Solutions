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
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> arr(n);

        for (auto &x : arr) cin >> x;

        ll count = b, sum = 0;

        for (ll i = 0; i < n; i++) sum += min(arr[i], a - 1);

        cout << count + sum << endl;
    }

    return 0;
}