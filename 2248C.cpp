#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(2*n + 1), f(n + 1, 0);

        vector<ll> dp(2*n + 1, 0);

        for (int i = 1; i <= 2*n; i++) cin >> a[i];

        for (int i = 1; i <= 2*n; i++){

            dp[i] = dp[i - 1] + 1;

            if (f[a[i]]){

                int l = f[a[i]];

                ll len = i - l + 1;

                dp[i] = max(dp[i], dp[l - 1] + len*len);
            }

            else f[a[i]] = i;
            
        }

        cout << dp[2*n] << endl;
    }

    return 0;
}