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
        ll x, y;
        cin >> x >> y;

        ll c = x + y, ans = x;

        for (int i = 31; i >= 0; i--){

            if ((x >> i & 1) && !(c >> i & 1)){

                for (int j = 0; j <= i; j++) ans &= ~(1LL << j);

                for (int j = 0; j < i; j++){
                    if (c >> j & 1) ans |= (1LL << j);
                }

                break;
            }
        }

        cout << c << " " << x - ans << endl;
    }

    return 0;
}

