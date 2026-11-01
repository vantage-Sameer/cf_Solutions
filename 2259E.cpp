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

        for (auto &x : b) cin >> x;

        vector<int> diff(n + 1, 0);

        for (int i = 0; i < n; i++){
            if (b[i] <= 0) continue;

            int x = b[i];

            int l = max(0, i - x + 1), r = min(n, i + x);

            diff[l]++;

            diff[r]--;
        }

        string ans(n, '0');

        int curr = 0;

        for (int i = 0; i < n; i++){
            curr += diff[i];

            if (curr == 0) ans[i] = '1';
        }

        bool check = true;

        for (int i = 0; i < n; i++){
            if (b[i] >= 0) {
                int x = b[i];

                if (i - x >= 0 && ans[i - x] == '1') continue;

                if (i + x < n && ans[i + x] == '1') continue;

                check = false;

                break;
            }
        }

        if (!check) cout << -1 << endl;
        
        else cout << ans << endl;
    }

    return 0;
}