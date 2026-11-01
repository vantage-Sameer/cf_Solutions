
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    int bal = (b == 0 && a > 0) ? 1 : 0;

    if (n < a + b + 1 + bal){
        cout << -1 << "\n";
        return 0;
    }

    vector<ll> ans;

    ans.pb(1);

    ll sum = 1, mx = 1;

    if (bal){
        ans.pb(1);
        sum++;
    }

    for (int i = 0; i < b; i++){
        ll x = sum + 1;
        ans.pb(x);
        sum += x;
        mx = x;
    }

    for (int i = 0; i < a; i++){
        ll x = mx + 1;
        ans.pb(x);
        sum += x;
        mx = x;
    }

    while ((int)ans.size() < n) ans.pb(1);

    for (ll x : ans) cout << x << " ";

    cout << "\n";

    return 0;
}
