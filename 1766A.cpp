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

        int exp = 1, count = 0, flag = 1;

        while (true){
            for (int i = 1; i <= 9; i++){
                if (exp*i <= n) count++;

                else{
                    flag = 0;
                    break;
                }
            }

            if (!flag) break;

            exp *= 10;
        }

        cout << count << endl;
    }

    return 0;
}