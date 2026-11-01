#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n);
    
    for (auto &x : a) cin >> x;
      
    sort(a.begin(), a.end());

    ll sum = a[n/2];

    ll ans = 0;

    for (auto &x : a) ans += llabs(sum - x);

    cout << ans << endl;

    return 0;
}