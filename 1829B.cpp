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

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        vector<int> dp(n);

        dp[0] = (arr[0] == 0 ? 1 : 0);

        for (int i = 1; i < n; i++){
            if (arr[i] == 0) dp[i] = dp[i - 1] + 1;

            else dp[i] = 0;
        }

        cout << *(max_element(dp.begin(), dp.end())) << endl;
    }

    return 0;
}