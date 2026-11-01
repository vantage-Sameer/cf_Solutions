#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD (int)(1e9 + 7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        if (n < 3){
            cout << 0 << endl;
            continue;
        }

        int p = (n + 1)/2, q = n/2;

        ll sum = 1LL*q*((1LL*p*(p - 1))/2);

        if (n >= 6) sum += (1LL*q*(q - 1)*(q - 2))/6;

        cout << sum%MOD << endl;
    }

    return 0;
}