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

        int g = 0, l = 0, r = n - 1;

        while (l < r){
            g = __gcd(g, abs(arr[r] - arr[l]));

            l++;
            r--;
        }

        cout << g << endl;
    }

    return 0;
}