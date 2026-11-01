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
        int n, x, y;
        cin >> n >> x >> y;

        if (x*y != 0 || (x == 0 && y == 0)) cout << -1 << endl;

        else{
            int num = max(x, y);

            if ((n - 1)%num != 0) cout << -1 << endl;

            else{
                for (int i = 2; i <= n; i += num){
                    for (int j = 0; j < num; j++) cout << i << " ";
                }

                cout << endl;
            }
        }
    }

    return 0;
}