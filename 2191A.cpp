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

        for (auto &x : a) cin >> x;

        vector<int> v = a;

        sort(v.begin(), v.end());

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) mp[v[i]] = i%2;

        bool flag = true;

        for (int i = 0; i < n - 1; i++){
            if (mp[a[i]] == mp[a[i + 1]]){
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}