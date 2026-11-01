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

        if (arr[0] == *(min_element(arr.begin(), arr.end())) || arr[n - 1] == *(max_element(arr.begin(), arr.end()))){
            cout << *(max_element(arr.begin(), arr.end())) - *(min_element(arr.begin(), arr.end())) << endl;
            continue;
        }

        int mx = INT_MIN;

        for (int i = 0; i < n - 1; i++) mx = max(mx, arr[i] - arr[i + 1]);

        for (int i = 1; i < n; i++) mx = max(mx, arr[i] - arr[0]);

        for (int i = 0; i < n - 1; i++) mx = max(mx, arr[n - 1] - arr[i]);

        cout << max(mx, arr[n - 1] - arr[0]) << endl;
    }

    return 0;
}