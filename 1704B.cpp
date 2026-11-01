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
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        vector<vector<int>> gap;

        for (int i = 0; i < n; i++) gap.pb({arr[i] - x, arr[i] + x});

        int count = 0;

        vector<int> curr = gap[0];

        for (int i = 1; i < n; i++){
            vector<int> temp = gap[i];

            if (curr[1] < temp[0] || temp[1] < curr[0]){
                curr = temp;
                count++;
                continue;
            }

            curr[0] = max(curr[0], temp[0]);

            curr[1] = min(curr[1], temp[1]);
        }

        cout << count << endl;
    }

    return 0;
}