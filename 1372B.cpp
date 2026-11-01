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

        int mx = 1;

        if (n%2 == 0) cout << n/2 << " " << n/2 << endl;

        else{
            for (int i = 1; i*i <= n; i++){
                if (n%i == 0) mx = max(mx, i);

                if (mx != 1) break;
            }

            if (mx == 1) cout << 1 << " " << n - 1 << endl;

            else cout << n/mx << " " << n - n/mx << endl;
        }
    }

    return 0;
}