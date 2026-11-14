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

        for (int i = 1; i < n; i++){
            if (i%2) cout << -1 << " ";

            else cout << 3 << " ";
        }

        if (n%2) cout << -1 << endl;

        else cout << 2 << endl;
    }

    return 0;
}