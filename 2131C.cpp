#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        map<int, int> mp1, mp2;

        for (auto &x : a){
            cin >> x;

            x %= k;

            mp1[x]++;
        }

        for (auto &x : b){
            cin >> x;

            x %= k;

            mp2[x]++;
        }

        bool flag = true;

        for (auto &x : mp2){
            if (mp2[x.first] + mp2[abs(x.first - k)] != mp1[x.first] + mp1[abs(x.first - k)]){
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}