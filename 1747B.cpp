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

        cout << (n + 1)/2 << endl;

        int l = 1, r = 3*n;

        while (l < r){
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }

    return 0;
}