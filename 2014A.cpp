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

        int bal = 0, count = 0;

        for (auto x : arr){
            if (x >= k) bal += x;

            if (x == 0 && bal > 0){
                bal--;
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}