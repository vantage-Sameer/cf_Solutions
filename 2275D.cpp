
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

bool good (ll tar, vector<bool>& case1, vector<bool>& case2, vector<ll>& sum, vector<ll>& d, ll n, ll k){

    ll bal = 0;

    for (int i = 0; i < n; i++){

        if (sum[i] >= tar) continue;

        if (case2[i]) return false;

        ll cost = tar - sum[i];

        if (!case1[i]) cost += 2*d[i];

        if (cost > k - bal) return false;

        bal += cost;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n), c(n), sum(n), d(n);

        vector<bool> case1(n, false), case2(n, false);

        ll mn = LLONG_MAX;

        for (int i = 0; i < n; i++){

            cin >> a[i] >> b[i] >> c[i];

            sum[i] = a[i] + b[i] + c[i];

            mn = min(mn, sum[i]);

            case1[i] = (a[i] > b[i] ||b[i] > c[i] || a[i] > c[i]);

            case2[i] = (a[i] == b[i] && b[i] == c[i]);

            d[i] = 0;

            if (!case1[i] && !case2[i]) d[i] = min(b[i] - a[i] + 1, c[i] - b[i] + 1);
        }

        ll l = mn, h = mn + k + 1;

        while (h - l > 1){
            ll mid = l + (h - l)/2;

            if (good(mid, case1, case2, sum, d, n, k)) l = mid;

            else h = mid;
        }

        cout << l << endl;
    }

    return 0;
}
