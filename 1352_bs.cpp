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

        ll n, k;
        cin >> n >> k;

        ll l = k, r = k*n;

        while (l < r){
            ll mid = l + (r - l)/2;

            ll x = mid;

            if (x - x/n < k) l = mid + 1;

            else if (x - x/n >= k) r = mid;
        }

        cout << l << endl;
    }

    return 0;
}