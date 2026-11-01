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

        unordered_map<int, int> mp;

        for (auto &x : arr){
            cin >> x;
            mp[x]++;
        }

        bool flag = false;

        for (auto &x : mp){
            if (x.second%k){
                cout << 0 << endl;
                flag = true;
                break;
            }

            else x.second /= k;
        }

        if (flag) continue;

        unordered_map<int, int> temp;

        ll sum = 0;

        int l = 0;

        for (int r = 0; r < n; r++){
            temp[arr[r]]++;

            while (temp[arr[r]] > mp[arr[r]]){
                temp[arr[l]]--;
                l++;
            }

            sum += (r - l + 1);
        }

        cout << sum << endl;
    }

    return 0;
}