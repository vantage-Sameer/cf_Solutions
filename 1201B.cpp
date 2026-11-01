#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> arr(n), pref(n, 0);

    for (auto &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    pref[0] = arr[0];

    for (ll i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];
    
    if (pref[n - 1]%2 == 0 && pref[n - 2] >= arr[n - 1]) cout << "YES" << endl;

    else cout << "NO" << endl;

    return 0;
}