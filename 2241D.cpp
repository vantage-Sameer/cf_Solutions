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

        vector<ll> a(n), b(n);

        ll sa = 0, sb = 0;

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        bool flag = true;

        for (int i = 0; i < n; i++){
            sa += a[i];
            sb += b[i];

            if (sa > sb){
                flag = false;
                break;
            }
        }
        
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}