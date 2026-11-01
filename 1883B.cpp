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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map<char, int> mp;

        for (auto c : s) mp[c]++;

        int oc = 0;

        for (auto x : mp){
            if (x.second%2 == 1) oc++;
        }

        if (oc <= k + 1) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}