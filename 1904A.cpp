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

        ll xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;

        ll X[] = {a, a, -a, -a, b, b, -b, -b};

        ll Y[] = {b, -b, b, -b, a, -a, a, -a};

    set<pair<ll,ll>> k, q;

    for (int i = 0; i < 8; i++){
        k.insert({xk + X[i], yk + Y[i]});
        q.insert({xq + X[i], yq + Y[i]});
    }

    int count = 0;

    for (auto p : k){
        if (q.count(p)) count++;
    }

    cout << count << endl;
    }

    return 0;
}