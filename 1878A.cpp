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

        bool flag = false;

        for (auto x : arr){
            if (x == k){
                flag = true;
                break;
            }
        }

        if (flag) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}