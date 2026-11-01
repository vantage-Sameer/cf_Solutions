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

        if (k == 2){
            cout << "NO" << endl;
            continue;
        }

        if (k == 1){
            cout << (n%2 == 0 ? "YES\n" : "NO\n");
            continue;
        }

        ll l = n - k + 1;

        if (l%2 == 1){

            ll m = (k + 1)/2;

            cout << (m%2 == 0 ? "YES\n" : "NO\n");
        }

        else{

            ll m = k - (k + 1)/2;

            cout << (m%2 == 0 ? "YES\n" : "NO\n");
        }
    }

    return 0;
}