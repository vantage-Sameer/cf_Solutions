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

        vector<int> a(n), even, ans;

        for (auto &x : a){
            cin >> x;

            if (x%2 == 0) even.pb(x);
        }

        if ((int)even.size() > 1){
            cout << even[0] << " " << even[1] << endl;
            continue;
        }

        bool flag = false;

        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if ((a[j]%a[i])%2 == 0){
                    flag = true;
                    ans.pb(a[i]);
                    ans.pb(a[j]);
                    break;
                }
            }
            if (flag) break;
        }

        if (!flag) cout << -1;

        else cout << ans[0] << " " << ans[1];

        cout << endl;
    }

    return 0;
}