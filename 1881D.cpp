#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const int LIM = 1000000;

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
        pf.pb(spf[n]);
        n /= spf[n];
    }

    return pf;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        unordered_map<int, int> mp;

        for (auto &x : arr){
            vector<int> temp = prime_factors(x);

            for (auto &y : temp) mp[y]++;
        }

        bool flag = true;

        for (auto &x : mp){
            if (x.second%n != 0){
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}