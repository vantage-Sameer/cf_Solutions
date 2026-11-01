
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

#define LIM 300000

vector<int> spf(LIM + 1);

void sieve() {
    for (int i = 0; i <= LIM; i++)
        spf[i] = i;

    for (int i = 2; i * i <= LIM; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= LIM; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

vector<int> prime_factors(int n) {
    vector<int> pf;

    while (n > 1) {
        int p = spf[n];
        pf.pb(p);

        while (n%p == 0)
            n /= p;
    }

    return pf;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        int mx = 0;

        vector<int> div = prime_factors(x);

        for (auto &d : div){

            int sum = 0;

            for (auto &v : a){
                if (v%d == 0) sum += v;
            }

            mx = max(mx, sum);
        }

        cout << mx << endl;
    }

    return 0;
}
