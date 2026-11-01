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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    cin >> n;

    if (n == 1){
        cout << "1 0"<< endl;
        return 0;
    }

    map<int, int> mp;

    while (n > 1){
        mp[spf[n]]++;
        n /= spf[n];
    }

    ll prod = 1;

    int mx = 0;

    for (auto p : mp){
        prod *= p.first;
        mx = max(mx, p.second);
    }

    int pw = 1, ops = 0;

    while (pw < mx){
        pw <<= 1;
        ops++;
    }

    bool extra = false;

    for (auto p : mp){
        if (p.second != pw){
            extra = true;
            break;
        }
    }

    int operations = ops + (extra ? 1 : 0);

    cout << prod << " " << operations << endl;

    return 0;
}

