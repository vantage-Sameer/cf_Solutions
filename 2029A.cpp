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
        int l, r, k;
        cin >> l >> r >> k;

        cout << max(r/k - l + 1, 0) << endl;
    }

    return 0;
}