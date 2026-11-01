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

        for (auto &x  : arr) cin >> x;

        ll sum = 0;

        for (int i = 1; i < n; i++){
            if (arr[i] >= 2*arr[0]) sum += (arr[i] + 2*arr[0] - 2)/(2*arr[0] - 1) - 1;
        }

        cout << sum << endl;
    }

    return 0;
}