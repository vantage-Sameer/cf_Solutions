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

        int mn = INT_MAX;

        for (auto &x : arr){
            if (x%k == 0){
                flag = true;
                break;
            }

            mn = min(mn, k - x%k);
        }

        if (k == 4 && flag == false){
            int count1 = 0, count2 = 0, count3 = 0;

            for (auto &x : arr){
                if ((x%4) == 1) count1++;

                else if (x%4 == 2) count2++;

                else count3++;
            }

            if (count2 > 1) cout << 0 << endl;

            else if (count3 > 0) cout << 1 << endl;

            else if (count1 > 0 && count2 > 0) cout << 1 << endl;

            else cout << 2 << endl;

            continue;
        }

        if (flag) cout << 0;

        else cout << mn;

        cout << endl;
    }

    return 0;
}