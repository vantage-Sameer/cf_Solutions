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

        int s = arr[0];

        for (int i = 1; i < n; i++) s = s^arr[i];

        if (s == 0){
            cout << 0 << endl;
            continue;
        }

        else{
            if (n%2 == 0) cout << -1 << endl;

            else cout << s << endl;
        }
    }

    return 0;
}