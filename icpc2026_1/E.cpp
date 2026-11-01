#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const int LIM = 1000000;

vector<int> primes, ans;

int n;

void sieve() {
    vector<bool> isPrime(LIM + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i*i <= LIM; i++){
        if (isPrime[i]){
            for (int j = i*i; j <= LIM; j += i) isPrime[j] = false;
        }
    }

    for (int i = 2; i <= LIM; i++){
        if (isPrime[i]) primes.pb(i);
    }
}

void dfs(int idx, int prod){

    ans.pb(prod);

    for (int i = idx; i < (int)primes.size(); i++){

        if (1LL*prod*primes[i] > n) break;

        dfs(i, prod*primes[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int q;
    cin >> n >> q;

    ans.reserve(n);

    dfs(0, 1);

    while (q--){
        int k;
        cin >> k;
        cout << ans[k - 1] << endl;
    }

    return 0;
}