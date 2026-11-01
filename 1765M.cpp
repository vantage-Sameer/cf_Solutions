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
        ll n;
        cin >> n;

        if (n%2 == 0) cout << n/2 << " " << n/2 << endl;

        else{

            ll mx = 0, count = 0;

            for (ll i = 1; i*i <= n; i++){
                if (n%i == 0){ 

                    mx = i;
                    count++;

                    if (count == 2) break;
                }
            }

            if (count == 1) cout << 1 << " " << n - 1 << endl;

            else cout << n/mx << " " << n - n/mx << endl;
        }
    }

    return 0;
}