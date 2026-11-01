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

        vector<int> p(n);

        for (auto &x : p) cin >> x;

        for (auto &x : p) cout << n + 1 - x << " ";

        cout << endl;
    }

    return 0;
}