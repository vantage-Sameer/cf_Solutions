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

        if (n%2 == 0) cout << (n/2)*(n/2) << endl;

        else cout << (n/2)*(n/2 + 1) << endl;
    }

    return 0;
}