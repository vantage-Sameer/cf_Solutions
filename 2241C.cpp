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

        int p = 0;
        for (int i = 1; i < n; i++){
            if (s[i] != s[i - 1]) p++;
        }

        if (p == 0) cout << 1;
        
        else if (p == 1) cout << 2;
       
        else cout << 1;

        cout << endl;

    }

    return 0;
}