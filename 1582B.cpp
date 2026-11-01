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
        int n;
        cin >> n;

        vector<ll> arr(n);

        ll A = 0, Z = 0;

        for (auto &x : arr){
            cin >> x;
            
            if (x == 1) A++;

            if (x == 0) Z++;
        }

        if (A == 0) cout << 0 << endl;

        else{
            ll val = 1;

            while (Z--) val *= 2;

            cout << A*val << endl;
        }
    }

    return 0;
}