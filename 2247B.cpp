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
        int n, k, m;
        cin >> n >> k >> m;

        if (k > m){
        cout << "NO" << endl;
        continue;
        }

        cout << "YES" << endl;

        vector<int> ans(n + 1);

        for (int i = 0; i <= n; i++){

            if (i < k) ans[i] = i;

            else ans[i] = ans[i - k];
        }

        for (int i = 1; i <= n; i++){
            
            if (ans[i] <= ans[i - 1]) cout << ans[i] - ans[i - 1] + m << " ";

            else cout << ans[i] - ans[i - 1] << " ";
        }

        cout << endl;
    }

    return 0;
}