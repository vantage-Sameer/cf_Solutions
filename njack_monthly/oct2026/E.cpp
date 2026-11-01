
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> tot(1e5 + 1);

    iota(tot.begin(), tot.end(), 0);

    for (int i = 2; i <= 1e5; i++){
        if (tot[i] == i){
            for (int j = i; j <= 1e5; j += i) tot[j] -= tot[j]/i;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        vector<int> cnt(1e5 + 1, 0);

        int ans = 0;

        for (int i = 0; i < n; i++){

            int sum = 0;

            for (int j = 1; j*j <= a[i]; j++){
                
                if (a[i]%j == 0){
                    sum += tot[j]*cnt[j];

                    if (j != a[i]/j) sum += tot[a[i]/j]*cnt[a[i]/j];
                }
            }

            ans += (n - i - 1)*sum;

            for (int k = 1; k*k <= a[i]; k++){

                if (a[i]%k == 0){
                    cnt[k]++;

                    if (k != a[i]/k) cnt[a[i]/k]++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
