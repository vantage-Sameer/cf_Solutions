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

        while (x > 0){

            auto it = lower_bound(v.begin(), v.end(), x);

            ll d;

            if (it == v.begin()) d = *it;

            else if (it == v.end()) d = v.back();

            else{
                ll a = *(it - 1), b = *it;

                if (x - a <= b - x) d = a;

                else d = b;
            }

            x = abs(x - d);
            
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}