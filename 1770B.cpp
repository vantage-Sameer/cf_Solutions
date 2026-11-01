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
        int n, k;
        cin >> n >> k;

        int l = 1, r = n;

        while (l <= r){
            cout << r << " ";

            if (l < r) cout << l << " ";

            else break;

            r--;

            l++;
        }

        cout << endl;
    }

    return 0;
}