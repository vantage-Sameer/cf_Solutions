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

        vector<int> ans(n);

        for (int i = 0; i < n; i += 2) ans[i] = i + 2;

        for (int i = 1; i < n; i += 2) ans[i] = i;

        for (auto &x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}