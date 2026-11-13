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
        char curr = 'R';

        for (int i = 0; i < n; i++){
            if (curr != s[i]) ans++;

            curr = (s[i] == 'R' ?  'B' : 'R');
        }

        cout << ans << endl;
    }

    return 0;
}