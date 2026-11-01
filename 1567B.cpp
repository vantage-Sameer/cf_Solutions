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

        int n = a - 1, f;

        if (n % 4 == 0) f = n;
        else if (n % 4 == 1) f = 1;
        else if (n % 4 == 2) f = n + 1;
        else f = 0;

        if (f == b){
            cout << a << endl;
            continue;
        }

        if ((f^b) == a) cout << a + 2 << endl;

        else cout << a + 1 << endl;
    }

    return 0;
}