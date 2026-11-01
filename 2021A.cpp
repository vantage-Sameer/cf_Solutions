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

        vector<ll> arr(n);

        for (auto &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 1; i++) arr[i + 1] = (arr[i] + arr[i + 1])/2;

        cout << arr[n - 1] << endl;
        
    }

    return 0;
}