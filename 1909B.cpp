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

        int count = 0;

        while (true){
            bool flag = true;

            int rem = arr[0]&1;

            for (int i = 1; i < n; i++){
                if ((arr[i]&1) != rem){
                    flag = false;
                    break;
                }
            }

            if (!flag) break;

            count++;

            for (auto &x : arr) x /= 2;
        }

        cout << (1LL << (count + 1)) << endl;
    }

    return 0;
}