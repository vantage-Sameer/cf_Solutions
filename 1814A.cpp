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

        if (n%2 == 0) cout << "YES" << endl;

        else{
            if (k%2 == 1) cout << "YES" << endl;

            else cout << "NO" << endl;
        }
    }

    return 0;
}