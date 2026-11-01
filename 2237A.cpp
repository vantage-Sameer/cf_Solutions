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

        vector<int> pref(n, 0);

        pref[0] = arr[0];

        for (int i = 1; i < n; i++) pref[i] = min(pref[i - 1], arr[i]);

        int sum = 0;

        for (auto x : pref) sum += x;

        cout << sum << endl;
    }

    return 0;
}