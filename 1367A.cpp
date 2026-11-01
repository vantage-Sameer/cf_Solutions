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
        string b;
        cin >> b;

        int n = (int)b.size();

        cout << b[0];

        for (int i = 1; i < n - 1; i += 2) cout << b[i];

        cout << b[n - 1] << endl;
    }

    return 0;
}