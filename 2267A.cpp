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
        char c;
        string s;

        cin >> n >> c >> s;

        int ans = 0;

        for (int i = 0; i < n/2; i++){
            if (s[i] != s[n - i - 1]){
                if (s[i] != c) ans++;

                if (s[n - i - 1] != c) ans++;
            } 
        }

        cout << ans << endl;
    }

    return 0;
}