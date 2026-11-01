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
        ll x, n;
        cin >> x >> n;

        ll q = n/4, r = n%4;

        ll val = 4*q, bal = 0;

        if (x&1){
            if (r == 0) bal = 0;

            else if (r == 1) bal = val + 1;

            else if (r == 2) bal = -1;

            else bal = -(val + 4);
        }

        else{
            if (r == 0) bal = 0;

            else if (r == 1) bal = -(val + 1);

            else if (r == 2) bal = 1;

            else bal = (val + 4);
        }

        cout << x + bal << endl;
    }

    return 0;
}