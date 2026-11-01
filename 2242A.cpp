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
        int k;
        cin >> k;

        int two = 0, g = 0, x;

        while (k--){
            cin >> x;

            if (x == 2) two++;

            else if (x > 2) g++;
        }

        if (g > 0 || two > 1) cout << "YES" << endl;
        
        else cout << "NO" << endl;

    }

    return 0;
}