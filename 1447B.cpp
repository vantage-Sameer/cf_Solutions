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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));

        int sum = 0, mn = INT_MAX, cnt = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];

                sum += abs(arr[i][j]);

                if (arr[i][j] < 0) cnt++;

                mn = min(mn, abs(arr[i][j]));
            }
        }

        if (cnt%2 == 0) cout << sum << endl;

        else cout << sum - 2*mn << endl;
    }

    return 0;
}