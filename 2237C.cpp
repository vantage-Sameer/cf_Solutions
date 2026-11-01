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

        vector<ll> arr(n);

        for (auto &x : arr) cin >> x;

        if (is_sorted(arr.begin(), arr.end())){
            cout << arr[n - 1] << endl;
            continue;
        }

        ll curr = arr[0], ans = 0;

        for (int i = 1; i < n; i++){
            if (arr[i] >= curr) {
                ans = max(ans, curr);
                curr = arr[i];
            }

            else curr += arr[i]; 
        }

        ans = max(ans, curr);

        cout << ans << endl;
    }

    return 0;
}