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

        if (k > n - 2){
            cout << -1 << endl;
            continue;
        }

        if (k%2 == 0){
            for (int i = 0; i < k/2 + 1; i++) cout << 1;

            for (int i = 0; i < k/2 + 1; i++) cout << 0;

            for (int i = k + 2; i < n; i++){
                if ((i - (k + 2))%2 == 0) cout << 1;

                else cout << 0;
            }
        }

        else{
            for (int i = 0; i < k/2 + 1; i++) cout << 1;

            for (int i = 0; i < k/2 + 2; i++) cout << 0;

            for (int i = k + 2; i < n; i++){
                if ((i - (k + 2))%2 == 0) cout << 1;

                else cout << 0;
            }
        }

        cout << endl;
    }

    return 0;
}