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

        int count = 0;

        for (auto c : s) if (c == '.') count++;

        bool flag = false;

        for (int i = 0; i < n - 2; i++){
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
                flag = true;
                break;
            }
        }

        if (flag) cout << 2 << endl;

        else cout << count << endl;
    }

    return 0;
}