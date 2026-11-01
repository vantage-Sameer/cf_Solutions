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

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        if (k == 1){
            if (is_sorted(arr.begin(), arr.end())) cout << "YES" << endl;

            else cout << "NO" << endl;
        }

        else cout << "YES" << endl;
    }

    return 0;
}