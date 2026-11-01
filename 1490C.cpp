#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define LIM (int)(1e4)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> cube(LIM + 1);

    unordered_map<ll, int> mp;

    for (int i = 1; i <= LIM; i++){
        cube[i] = 1LL*i*i*i;
        mp[cube[i]] = i;
    }

    int t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        int l = 1, r = LIM;

        while (l < r){
            int mid = l + (r - l) / 2;

            if (cube[mid] >= x) r = mid;

            else l = mid + 1;
        }

        int k = l;

        bool flag = false;

        for (int i = 1; i <= k; i++){
            if (mp.count(x - cube[i])){
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}