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

        vector<int> a(n);

        int cnt0 = 0;

        for (int i = 0; i < n; i++){
            cin >> a[i];

            if (a[i] == 0) cnt0++;
        }

        if (cnt0 == 1){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        string ans(n, 'C');

        if (cnt0 >= 2){

            int z = 0;

            for (int i = 0; i < n; i++){

                if (a[i] == 0){

                    if (z == 0){
                        ans[i] = 'A';
                        z++;
                    } 

                    else ans[i] = 'B';

                }
            }
        }

        else for (int i = 0; i < n; i++) ans[i] = 'A';

        cout << ans << endl;
    }

    return 0;
}