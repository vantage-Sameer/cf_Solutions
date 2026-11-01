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
        int x, n;
        cin >> x >> n;

        cout << (n%2 == 1 ? x : 0) << endl;
    }

    return 0;
}