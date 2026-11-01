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

        map<int, int> mp;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        set<int> st;

        for (auto &x : mp) {
            st.insert(x.first);
            st.insert(x.first + 1);
        }

        int prev = 0, ans = 0;

        for (auto x : st){
            int curr = mp[x];

            if (curr > prev) ans += curr - prev;

            prev = curr;
        }

        cout << ans << "\n";
    }

    return 0;
}