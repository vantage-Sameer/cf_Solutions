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
        int n;
        cin >> n;

        vector<int> arr(n);

        map<int, int> mp;

        for (auto &x : arr){
            cin >> x;
            mp[x]++;
        }

        int mx = INT_MIN;

        for (auto x : mp){
            if (x.second > mx) mx = x.second;
        }

        int ans = n - mx;

        while (mx < n){
            mx *= 2;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}