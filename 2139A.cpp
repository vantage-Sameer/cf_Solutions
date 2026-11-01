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
        int a, b;
        cin >> a >> b;

        if (a == b) cout << 0;

        else if (a%b == 0 || b%a == 0) cout << 1;

        else cout << 2;

        cout << endl;
    }

    return 0;
}