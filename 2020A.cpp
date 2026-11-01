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
        ll n, k;
        cin >> n >> k;

        if (k == 1){
            cout << n/k << endl;
            continue;
        }

        vector<ll> p;

        ll i = 1;

        while (i <= n){
            p.pb(i);

            if (i > n/k) break;

            i *= k;
        }

        ll ops = 0, bal = n;

        int s =  (int)p.size();

        for (int j = s - 1; j >= 0; j--){
            ops += bal/p[j];
            
            bal -= p[j]*(bal/p[j]);
        }

        cout << ops << endl;
    }

    return 0;
}