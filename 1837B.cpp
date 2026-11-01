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

        string s;
        cin >> s;

        vector<int> dp(n);

        dp[0] = 1;

        for (int i = 1; i < n; i++){
            if (s[i] == s[i - 1]) dp[i] = dp[i - 1] + 1;

            else dp[i] = 1;
        }

        cout << 1 + (*(max_element(dp.begin(), dp.end()))) << endl;
    }

    return 0;
}