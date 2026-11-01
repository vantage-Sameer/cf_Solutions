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

        int x, y;
        cin >> x >> y;
        
        if (x%y == 0) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}