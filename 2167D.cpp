#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> primes;

    vector<bool> p(101, true);

    p[0] = false; p[1] = false;

    for (int i = 2; i <= 100; i++){
        if (p[i] = true){
            primes.pb(i);

            for (int j = i*i; j <= 100; j += i) p[j] = false;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        ll mn = INT_MAX;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < (int)primes.size(); j++){
                if (__gcd(primes[j], a[i]) == 1){
                    mn = min(mn, primes[j]);
                    break;
                }
            }
        }

        cout << (mn == INT_MAX ? -1 : mn) << endl;
    }

    return 0;
}