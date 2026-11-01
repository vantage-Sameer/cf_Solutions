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
        string s;

        cin >> n >> k >> s;

        vector<int> v;

        for (int i = 0; i < n; i++) if (s[i] == '1') v.pb(i + 1);

        if (v.empty()) cout << (n - 1)/(k + 1) + 1 << endl;

        else if (v.size() == 1) cout << (v[0] - 1)/(k + 1) + (n - v[0])/(k + 1) << endl;

        else{
            int c = (int)v.size(), ans = 0;

            for (int i = 0; i < c - 1; i++){
                if (v[i + 1] - v[i] > (2*k + 1)) ans += (v[i + 1] - v[i] - k - 1)/(k + 1);
            }

            ans += (v[0] - 1)/(k + 1) + (n - v[c - 1])/(k + 1);

            cout << ans << endl;
        }
    }

    return 0;
}