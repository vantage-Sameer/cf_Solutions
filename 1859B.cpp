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

        vector<pair<int, int>> pp;

        while (n--){
            int m;
            cin >> m;

            vector<int> temp(m);

            for (auto &x : temp) cin >> x;

            sort(temp.begin(), temp.end());

            pp.pb({temp[0], temp[1]});
        }

        sort(pp.begin(), pp.end());

        ll sum = 0;

        int mn1 = INT_MAX, mn2 = INT_MAX;

        for (auto &x : pp){
            sum += x.second;
            mn1 = min(mn1, x.first);
            mn2 = min(mn2, x.second);
        }

        cout << sum - mn2 + mn1 << endl;
    }

    return 0;
}