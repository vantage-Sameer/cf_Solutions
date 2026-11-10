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

        int ans = -1;

        for (int i = 0; i < n - 1; i++){

            if (abs(a[i] - a[i + 1]) <= 1){
                ans = 0;
                break;
            }
        }

        if (ans == 0){
            cout << ans << endl;
            continue;
        }

        if (is_sorted(a.begin(), a.end()) || is_sorted(a.rbegin(), a.rend())){
            cout << -1 << endl;
            continue;
        }

        cout << 1 << endl;
    }

    return 0;
}