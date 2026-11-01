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

        cin >> n >> c;

        string s;
        cin >> s;

        bool flag = true;

        for (char ch : s){
            if (ch != c){
                flag = false;
                break;
            }
        }

        if (flag){
            cout << 0 << endl;
            continue;
        }

        int ans = -1;

        for (int x = 1; x <= n; x++){

            bool check = true;

            for (int j = x; j <= n; j += x){
                if (s[j - 1] != c){
                    check = false;
                    break;
                }
            }

            if (check){
                ans = x;
                break;
            }
        }

        if (ans != -1){
            cout << 1 << endl;
            cout << ans << endl;
        }

        else{
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }

    return 0;
}