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

        if (!(is_sorted(arr.begin(), arr.end()))){
            cout << 0 << endl;
            continue;
        }

        int mn = INT_MAX;

        for (int i = 0; i < n - 1; i++) mn = min(mn, arr[i + 1] - arr[i]);

        cout << mn/2 + 1 << endl;
    }

    return 0;
}