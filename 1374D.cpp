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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);

        for (auto &x : arr){
            cin >> x;
            x %= k;
        }

        map<ll, ll> mp;

        ll count = 0, sum = 0;

        for (auto x : arr) mp[x]++;

        for (auto x : mp){
            if (x.first == 0) continue;

            
        }
    }

    return 0;
}