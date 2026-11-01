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
        int x, y, r;
        cin >> x >> y >> r;

        bool flag = false;

        for (int i = - 25; i <= 25; i++){
            for (int j = -25; j <= 25; j++){
                if ((x - i)*(x - i) + (y - j)*(y - j) == r*r){
                    cout << i << " " << j << endl;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
    }

    return 0;
}