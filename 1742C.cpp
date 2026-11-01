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
        char arr[8][8];

        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++) cin >> arr[i][j];
        }

        bool flag = false;

        for (int j = 0; j < 8; j++){
            int count = 0;

            for (int i = 0; i < 8; i++){
                if (arr[i][j] == 'B') count++;
            }

            if (count == 8){
                flag = true;
                break;
            }
        }

        if (flag) cout << 'B' << endl;
        
        else cout << 'R' << endl;
    }

    return 0;
}