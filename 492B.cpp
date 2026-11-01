#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    cin >> n >> l;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    int mx = 0;

    for (int i = 1; i < n; i++) mx = max(mx, a[i] - a[i - 1]);

    double ans = max({mx, 2*(a[0] - 0), 2*(l - a[n - 1])});

    ans /= 2.0;

    cout << fixed << setprecision(11) << ans << endl;

    return 0;
}