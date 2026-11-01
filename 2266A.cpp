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

        int a, b, c;
        cin >> a >> b >> c;

        cout << n - min(a, min(b, c)) << endl;
    }

    return 0;
}