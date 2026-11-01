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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        ll ans = 0;

        int i = 0;

        while (i < n){

            if (arr[i] > q){
                i++;
                continue;
            }

            int j = i, len = 0;

            while (j < n && arr[j] <= q) j++;

            len = j - i;

            if (len >= k) ans += 1LL*(len - k + 1)*(len - k + 2)/2;

            i = j;
        }

        cout << ans << endl;
    }

    return 0;
}