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

        vector<int> arr(n), pos(n + 1);

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            pos[arr[i]] = i + 1;
        }

        int g = __gcd(x, y);

        bool flag = false;

        for (int i = 1; i <= n; i++){
            if ((pos[i] - i)%g != 0){
                flag = true;
                break;
            }
        }

        cout << (flag ? "NO\n" : "YES\n");
    }

    return 0;
}