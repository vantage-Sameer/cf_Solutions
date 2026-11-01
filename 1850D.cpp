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

        vector<int> arr(n), dp(n);

        for (auto &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        dp[0] = 1;

        for (int i = 0; i < n - 1; i++){
            if (arr[i + 1] - arr[i] <= k) dp[i + 1] = dp[i] + 1;

            else dp[i + 1] = 1;
        }

        cout << n - *(max_element(dp.begin(), dp.end())) << endl;
    }

    return 0;
}