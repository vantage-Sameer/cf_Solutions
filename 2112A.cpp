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
        int a, x, y;
        cin >> a >> x >> y;

        int m = abs(x - a), n = abs(y - a);

        int ans = -1;

        for (int i = 1; i < 101; i++){
            if (abs(x - i) < m && abs(y - i) < n){
                ans = i;
                break;
            }
        }

        cout << (ans == -1 ? "NO\n" : "YES\n");
    }

    return 0;
}