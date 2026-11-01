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

        string s;
        cin >> s;

        if (2*k > n){
            cout << -1 << endl;
            continue;
        }

        int ans = 0;

        for (int i = 0; i < k; i++){
            if (s[i] == 'L') ans++;
        }

        for (int i = n - k; i < n; i++){
            if (s[i] == 'R') ans++;
        }
        
        cout << ans << endl;
    }

    return 0;
}