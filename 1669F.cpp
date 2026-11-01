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

        vector<int> pref(n), suff(n);

        pref[0] = arr[0], suff[n - 1] = arr[n - 1];

        for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];

        for (int i = n - 2; i >= 0; i--) suff[i] = suff[i + 1] + arr[i];

        int l = 0, r = n - 1, ans = 0;

        while (l < r){
            if (pref[l] == suff[r]){

                ans = max(ans, (l + 1) + (n - r));

                l++;
                r--;
            }

            else if (pref[l] < suff[r]) l++;

            else r--;
        }

        cout << ans << endl;
    }

    return 0;
}