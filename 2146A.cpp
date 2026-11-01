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

        vector<int> a(n);

        unordered_map<int, int> mp;

        for (auto &x : a){
            cin >> x;
            mp[x]++;
        }

        vector<int>val;

        for (auto &x : mp) val.pb(x.second);

        int mx = INT_MIN;

        sort(val.begin(), val.end());
        
        for (int i = 0; i < (int)val.size(); i++) mx = max(mx, val[i]*((int)val.size() - i));

        cout << mx << endl;
    }

    return 0;
}