#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (auto &x : a) cin >> x;

    for (auto &x : b) cin >> x;

    unordered_map<ll, int> mp;

    int zero = 0;

    for (int i = 0; i < n; i++){

        if (a[i] == 0){
            if (b[i] == 0) zero++;
            continue;
        }

        int x = -b[i], y = a[i];

        int g = __gcd(abs(x), abs(y));

        x /= g;

        y /= g;

        if (y < 0){
            x = -x;
            y = -y;
        }

        ll val = ((ll)(int32_t)x << 32) | (uint32_t)y;

        mp[val]++;
    }

    int mx = 0;

    for (auto &it : mp) mx = max(mx, it.second);

    cout << mx + zero << endl;

    return 0;
}