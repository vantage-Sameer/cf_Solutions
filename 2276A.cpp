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

        if (a <= b){
            cout << - 1 << endl;
            continue;
        }

        if (a >= 2*b) cout << b << endl;

        else cout << a - b << endl;
    }

    return 0;
}