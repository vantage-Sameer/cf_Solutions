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
        int n, r;
        cin >> n >> r;

        vector<int> arr(n);

        int sum = 0;

        for (auto &x : arr){
            cin >> x;
            sum += x;
        }

        int p = 0;

        for (auto x : arr) p += x/2;

        int count = 2*p;

        int bal = sum - count, s = r - p;

        if (bal <= s) count += bal;

        else count += (bal - 2*(bal - s));

        cout << count << endl;
    }

    return 0;
}