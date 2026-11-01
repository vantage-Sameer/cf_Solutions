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

        int g = 0;

        for (int i = 1; i <= n; i++){
            int diff = abs(arr[i] - i);

            g = __gcd(g, diff);
        }

        cout << g << endl;
    }

    return 0;
}