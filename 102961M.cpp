#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    int l = 0, r = 0;

    unordered_map<int, int> mp;

    while (r < n){
        mp[a[r]]++;

        while (r < n && mp[a[r]] > 1){
            mp[a[l]]--;
            l++;
        }

        ans = max(ans, r - l + 1);

        r++;
    }

    cout << ans << endl;

    return 0;
}