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
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);

        int sum = 0;

        for (auto &x : arr){
            cin >> x;
            sum += x;
        }

        if (s > sum) {
            cout << -1 << "\n";
            continue;
        }

        int l = 0, curr = 0, mx = 0;

        for (int r = 0; r < n; r++){
            curr += arr[r];

            while (curr > s){
                curr -= arr[l];
                l++;
            }

            if (curr == s) mx = max(mx, r - l + 1);
        }

        cout << n - mx << "\n";
    }

    return 0;
}