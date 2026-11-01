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

        int p = 0;

        int temp = n;

        while (temp){
            p++;
            temp >>= 1;
        }

        if (p == 0) p = 1;

        bool flag = false;

        for (int i = p; i <= 31 && !flag; i++){
            
            bool pal = true;

            for (int j = 0; j < i / 2; j++) {
                int l = (n >> (i - 1 - j)) & 1, r = (n >> j) & 1;

                if (l != r){
                    pal = false;
                    break;
                }
            }

            if (pal) flag = true;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}