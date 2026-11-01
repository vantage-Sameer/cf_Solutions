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

        vector<pair<int, int>> arr;

        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;

            int r = x%k;
            if (r == 0) r = k;

            arr.pb({r, i});
        }

        sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b){
            if (a.first != b.first) return a.first > b.first;

            return a.second < b.second;
        });

        for (auto x : arr) cout << x.second << " ";

        cout << endl;
    }

    return 0;
}