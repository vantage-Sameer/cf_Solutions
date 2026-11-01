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
        string s;
        cin >> s;

        int a = -1, b = -1;

        for (int i = 0; i < (int)s.size(); i++){
            if (s[i] == '0') if (a == -1) a = i;

            if (s[i] == '1') if (b == -1) b = i;

            if (a != -1 && b != -1) break;
        }

        for (int i = 0; i < (int)s.size(); i++){
            if (i == a || i == b) continue;

            cout << s[i];
        }

        cout << endl;
    }

    return 0;
}