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
        int n, a, b;
        cin >> n >> a >> b;

        vector<ll> arr(n + 1);

        for (int i = 1; i <= n; i++) cin >> arr[i];

        vector<ll> pref(n + 1, 0);

        for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + arr[i];

        ll mn = LLONG_MAX;

        for (int i = 0; i <= n; i++) mn = min(mn, 1LL*a*arr[i] + 1LL*b*((pref[n] - pref[i]) - 1LL*arr[i]*(n - i - 1)));

        cout << mn << endl;

    }

    return 0;
}