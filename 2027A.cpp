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

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;

        int p = 0, q = 0;

        for (auto x : arr){
            p = max(p, x.first);
            q = max(q, x.second);
        }

        cout << 2*(p + q) << endl;
    }

    return 0;
}