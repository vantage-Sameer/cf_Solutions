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

        string s;
        cin >> s;

        vector<int> cnt(26, 0);

        for (int i = 0; i < (n + 1)/2; i++){
            for (char c = min(s[i], s[n - 1 - i]); c < max(s[i], s[n - 1 - i]); c++) cnt[c - 'a']++;
        }

        int ans = 0;

        for (auto &x : cnt) ans += (x > 0);

        cout << ans << endl;
    }

    return 0;
}