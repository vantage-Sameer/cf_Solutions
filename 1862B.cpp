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

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        vector<int> ans;

        ans.pb(arr[0]);

        for (int i = 1; i < n; i++){
            if (arr[i] < arr[i - 1]){
                ans.pb(arr[i]);
                ans.pb(arr[i]);
            }

            else ans.pb(arr[i]);
        }

        cout << ans.size() << endl;

        for (auto x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}