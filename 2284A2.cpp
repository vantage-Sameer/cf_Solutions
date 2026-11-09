#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt(25, 0);

        int sum = 0;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;

            cnt[x]++;
            sum += (1LL << x);
        }

        int target = sum/2;

        int curr = 0;

        for (int i = 24; i >= 0; i--){
            int p = (1LL << i);

            int q = min(cnt[i], (target - curr)/p);

            curr += p*q;
        }

        int ans = curr*(sum - curr);

        cout << ans << endl;
    }

    return 0;
}