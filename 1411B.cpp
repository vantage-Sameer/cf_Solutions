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
        ll n;
        cin >> n; 


        for (ll i = 0; i <= 2520; i++){
            ll temp = n + i, p = n + i;

            bool flag = true;

            while(temp){
                int d = temp%10;

                if (d && p%d != 0){
                    flag = false;
                    break;
                }

                temp /= 10;
            }

            if (flag){
                cout << n + i << endl;
                break;
            }
        }
    }

    return 0;
}