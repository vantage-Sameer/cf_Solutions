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
        int n;
        cin >> n;

        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++) cin >> arr[i];

        unordered_map<int, int> mp;

        for (int i = 1; i <= n; i++) mp[arr[i]] = i;

        int mx = INT_MIN;

        for (auto &x : mp){
            for (auto &y : mp){
                if (__gcd(x.first, y.first) == 1) mx = max(mx, x.second + y.second);
            }
        }

        if (mx == INT_MIN) cout << -1 << endl;

        else cout << mx << endl;
    }

    return 0;
}