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

        int cnt = 0;

        for (auto &x : arr){
            cin >> x;

            if (x == 0) cnt++;
        }

        if (cnt < 2) cout << - 1 << endl;

        else{
            int ans = 2;

            if (arr[0] == 0) ans--;

            if (arr[n - 1] == 0) ans--;

            cout << ans << endl;
        }
    }

    return 0;
}