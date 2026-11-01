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
        int a, b, c;
        cin >> a >> b >> c;

        int A = max({a, b, c}), B = min({a, b, c});
        int C = a + b + c - A - B;

        if (B + C <= A) cout << C << endl;

        else cout << A - B << endl;

    }

    return 0;
}