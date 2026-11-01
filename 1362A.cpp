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
        ll a, b;
        cin >> a >> b;
        
        ll mx = (ll)max(a, b), mn = (ll)min(a, b);

        if (mx%mn != 0){
            cout << -1 << endl;
            continue;
        }

        ll q = mx/mn;

        if ((q & (q - 1)) != 0){
            cout << -1 << endl;
            continue;
        }

        ll k = __builtin_ctzll(q);

        cout << k/3 + (k%3)/2 + ((k%3)%2) << endl;
    }

    return 0;
}