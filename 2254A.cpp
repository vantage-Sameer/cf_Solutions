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
        int a, b, c;
        cin >> a >> b >> c;

        int mn = min({a, b, c}), mx = max({a, b, c});
        
        int mid = a + b + c - mx - mn;

        cout << min(mid - mn, mx - mid) << endl;
    }

    return 0;
}