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

        int k = 1;

        while ((k << 1) < n) k <<= 1;

        for (int i = k - 1; i >= 0; i--) cout << i << " ";

        for (int i = k; i < n; i++) cout << i << " ";

        cout << endl;
    }

    return 0;
}