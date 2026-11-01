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

        int count = 0, idx = -1;

        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                idx = i;
                break;
            }
        }

        if (idx == -1) cout << 0 << endl;

        else{
            for (int i = idx + 1; i < n; i++){
                if (i >= 1 && s[i] != s[i - 1]) count++;
            }

            cout << count << endl;
        }
    }

    return 0;
}