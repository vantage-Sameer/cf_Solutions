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

        vector<int> a(n), pref(n);

        for (auto &x : a) cin >> x;

        pref[0] = 0;

        for (int i = 1; i < n; i++){
            pref[i] = pref[i - 1];
            if (a[i] != a[i - 1]) pref[i]++;
        }

        int q;
        cin >> q;

        while (q--){
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            if (pref[l] == pref[r]){
                cout << -1 << " " << -1 << endl;
                continue;
            }

            int lo = l, hi = r;

            while (lo < hi){
                int mid = lo + (hi - lo)/2;

                if (pref[mid] == pref[l]) lo = mid + 1;

                else hi = mid;
            }

            cout << l + 1 << " " << lo + 1 << endl;
        }

        cout << endl;
    }

    return 0;
}