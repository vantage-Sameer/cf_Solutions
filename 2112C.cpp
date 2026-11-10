
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

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        ll ans = 0, mx = a[n - 1];

        int l = 0, r = n - 2;

        while (l < r){

            if (a[l] + a[r] > mx){
                ans += r - l;
                r--;
            }
            else l++;
            
        }

        for (int i = 2; i < n - 1; i++){

            ll target = max(a[i], mx - a[i]);

            l = 0;
            r = i - 1;

            while (l < r){
                if (a[l] + a[r] > target){
                    ans += r - l;
                    r--;
                }
                else l++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
