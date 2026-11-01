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

        int T = 0, M = 0;

        for (auto &c : s){
            if (c == 'T') T++;

            else M++;
        }

        if (T != 2*M){
            cout << "NO\n";
            continue;
        }

        bool flag = true;

        int bal = 0;

        for (auto &c : s){
            if (c == 'T') bal++;

            else bal--;

            if (bal < 0) {
                flag = false;
                break;
            }
        }

        if (flag){

            bal = 0;

            for (int i = n - 1; i >= 0; i--){
                if (s[i] == 'T') bal++;

                else bal--;

                if (bal < 0){
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}