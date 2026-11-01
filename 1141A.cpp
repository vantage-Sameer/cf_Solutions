#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    if (m%n != 0){
        cout << -1 << endl;
        return 0;
    }

    ll q = m/n;

    if (q == 1){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;

    while (q%2 == 0){
        ans++;
        q /= 2;
    }

    while (q%3 == 0){
        ans++;
        q /= 3;
    }

    cout << (q == 1 ? ans : -1) << endl;

    return 0;
}