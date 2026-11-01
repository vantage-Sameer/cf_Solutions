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

        vector<ll> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; i++){
            cin >> a[i];
            pref[i] = (pref[i - 1] + a[i])%k;
        }

        vector<ll> freq(k, 0);

        ll cnt = 0;

        for (int r = 1; r <= n; r++){
            if (r - k - 1 >= 0) freq[pref[r - k - 1]]++;

            cnt += freq[pref[r]];
        }

        cout << cnt << endl;
    }

    return 0;
}