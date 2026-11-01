#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a == b){
        cout << "infinity" << endl;
        return 0;
    }

    int n = a - b;

    vector<int> v;

    for (int i = 1; i*i <= n; i++){
        if (n%i == 0){
            v.pb(i);

            if (n/i != i) v.pb(n/i);
        }
    }

    sort(v.begin(), v.end());

    cout << v.end() - upper_bound(v.begin(), v.end(), b) << endl;

    return 0;
}