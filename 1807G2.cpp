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

        sort(arr.begin(), arr.end());

        if (arr[0] != 1){
            cout << "NO" << endl;
            continue;
        }

        ll pref = arr[0];

        bool flag = false;

        for (int i = 1; i < n; i++){
            if (arr[i] > pref){

                cout << "NO" << endl;
                flag = true;
                break;
            }

            pref += arr[i];
        }

        if (!flag) cout << "YES" << endl;
    }

    return 0;
}