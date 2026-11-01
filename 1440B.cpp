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
        cin >> n >> k;

        vector<int> arr(n*k);

        for (auto &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        int m = n/2 + 1;
        int idx = n*k - m;

        ll sum = 0;

        for (int i = 0; i < k; i++){
            sum += arr[idx];
            idx -= m;
        }

        cout << sum << endl;
    }

    return 0;
}