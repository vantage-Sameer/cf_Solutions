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

        int one = 0, z = 0;

        for (auto c : s){
            if (c == '1') one++;

            else z++;
        }

        int n = (int)s.size();

        for (int i = 0; i <= n; i++){

            if (i == n){
                cout << 0 << endl;
                break;
            }

            if (s[i] == '0'){

                if (one == 0){
                    cout << n - i << endl;
                    break;
                }

                one--;
            }

            else{

                if (z == 0){
                    cout << n - i << endl;
                    break;
                }

                z--;
            }
        } 
    }

    return 0;
}