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

        if (a == b) cout << 0 << " " << 0 << endl;

        else if (min(a, b) == 0 && max(a, b) != 0) cout << max(a, b) << " " << 0 << endl;

        else{
            ll temp = 1ll*abs(a - b), mx = max(a, b);

            if (min(a, b) < min(mx%temp, temp - mx%temp)) cout << temp << " " << max(mx%temp, temp - mx%temp) << endl;

            else cout << temp << " " << min(mx%temp, temp - mx%temp) << endl;
        }
    }
    return 0;
}