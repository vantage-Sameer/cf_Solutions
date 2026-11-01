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

        vector<pair<ll, ll>> a(n), b(n), c(n);

        for (int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        for (int i = 0; i < n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }

        for (int i = 0; i < n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a.rbegin(), a.rend());

        sort(b.rbegin(), b.rend());

        sort(c.rbegin(), c.rend());

        ll mx = 0;

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++){

                    int A = a[i].second, B = b[j].second, C = c[k].second;

                    if (A != B && B != C && C != A){
                        ll sum = a[i].first + b[j].first + c[k].first;
                        mx = max(mx, sum);
                    }
                }
            }
        }

        cout << mx << endl;

    }

    return 0;
}