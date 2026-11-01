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

        string s;
        cin >> s;

        int ans = 0; 

        for (int i = n - 2; i >= 0; i--) ans += (s[i] != s[n - 1]);

        cout << ans << endl;
    }

    return 0;
}