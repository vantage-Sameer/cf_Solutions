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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        sort(a.begin(), a.end());

        for (int i = 0; i < m; i++){
            a[0] = b[i];

            sort(a.begin(), a.end());
        }

        ll sum = 0;

        for(auto x : a) sum += x;

        cout << sum << endl;
    }

    return 0;
}