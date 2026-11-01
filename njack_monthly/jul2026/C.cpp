#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<ll> fib(){
    vector<ll> v(91);

    v[0] = 1;
    v[1] = 2;

    for (int i = 2; i < 91; i++) v[i] = v[i - 1] + v[i - 2];

    return v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v = fib();

    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;

        int cnt = 0;

        for (int i = 90; i >= 0; i--){
            if (v[i] <= x){
                x -= v[i];
                cnt++;
            }

            if (x == 0) break;
        }

        cout << cnt << endl;
    }

    return 0;
}