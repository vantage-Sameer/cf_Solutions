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
        string x;
        cin >> x;

        int k;
        cin >> k;

        bool flag = false;

        for (int i = 0; i < k; i++){
            if (flag) x[i] = 'a';

            else{
                if (x[i + 1] == '0'){
                    flag = true;
                    k++;
                }

                if (x[i + 1] != '0') x[i] = 'a';
            }
        }

        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] != 'a') cout << x[i];
        }

        cout << endl;
    }

    return 0;
}