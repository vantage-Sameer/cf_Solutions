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
        ll n, c;
        cin >> n >> c;

        vector<ll> s(n);

        ll sum = 0, sq = 0;

        for (auto &x : s){
            cin >> x;

            sum += 4*x;

            sq += x*x;
        }

        ll r = sqrt((ll)(1e18)/(4*n)), l = 1;

        while (l <= r){
            ll mid = l + (r - l)/2;

            ll val = 4*n*mid*mid + sum*mid + sq;

            if (val < c) l = mid + 1;

            else if (val > c) r = mid - 1;

            else{
                l = mid;
                break;
            }
        }

        cout << l << endl;
    }

    return 0;
}