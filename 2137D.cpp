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

        vector<int> b(n);
        unordered_map<int, int> mp;

        for (auto &x : b){
            cin >> x;
            mp[x]++;
        }

        bool flag = false;

        for (auto &x : mp){
            if (x.second % x.first != 0){
                flag = true;
                break;
            }
        }

        if (flag){
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> idx(n + 1);

        for (int i = 0; i < n; i++) idx[b[i]].pb(i);

        vector<int> ans(n);

        int curr = 1;

        for (auto &x : mp){

            int f = x.first;

            vector<int> &v = idx[f];

            for (int i = 0; i < (int)v.size(); i += f){

                for (int j = i; j < i + f; j++) ans[v[j]] = curr;

                curr++;
            }
        }

        for (auto &x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}