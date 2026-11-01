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
        ll a, b, c;
        cin >> a >> b >> c;

        if (a == b) cout << c << endl;

        else if (a < b){
            (b - a > llabs(a + c - b)) ? (cout << b - a << endl) : (cout << llabs(a + c - b) << endl);
        }

        else cout << a + c - b << endl;
    }

    return 0;
}