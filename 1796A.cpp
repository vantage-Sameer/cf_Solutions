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
        int k;
        cin >> k;

        string s;
        cin >> s;

        string str = "FBFFBFFBFBFFBFFBFBFFBFFB";

        bool flag = false;

        for (int i = 0; i < 8; i++){
            string x = str.substr(i, k);

            if (x == s){
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }

        if (!flag) cout << "NO" << endl;
    }

    return 0;
}