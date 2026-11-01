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

        int mx = 0, idx = -1, c = n;

        while (c--){
            int a, b;
            cin >> a >> b;

            if (a <= 10){
                if (b > mx){
                    mx = b;
                    idx = n - c;
                }
            }
        }

        cout << idx << endl;
    }

    return 0;
}