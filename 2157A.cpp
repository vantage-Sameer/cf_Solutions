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

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;

            mp[x]++;
        }

        int ans = 0;

        for (auto &y : mp){
            if (y.first != y.second){
                if (y.second <= y.first) ans += y.second;

                else ans += y.second - y.first;
            }
        }

        cout << ans << endl;
    }

    return 0;
}