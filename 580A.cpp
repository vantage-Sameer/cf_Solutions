#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    vector<int> dp(n);
    
    dp[0] = 1;

    for (int i = 1; i < n; i++){
        if (a[i] >= a[i - 1]) dp[i] = dp[i - 1] + 1;

        else dp[i] = 1;
    }

    cout << *(max_element(dp.begin(), dp.end())) << endl;

    return 0;
}