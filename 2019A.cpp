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

        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++) cin >> arr[i];

        int p = 0, q = 0;

        for (int i = 1; i <= n; i++){
            if (i%2 == 1){
                if (p < arr[i]) p = arr[i];
            }

            else{
                if (q < arr[i]) q = arr[i];
            }
        }

        int ans = max(p + (n + 1)/2, q + n - (n + 1)/2);

        cout << ans << endl;
    }

    return 0;
}