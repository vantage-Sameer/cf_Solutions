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

        vector<int> arr(n);

        bool zero = false, nzero = false;

        for (auto &x : arr){
            cin >> x;
            if (x == 0) zero = true;
            else nzero = true;
        }

        if (!nzero){
            cout << 0 << endl;
            continue;
        }

        int con = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] != 0 && (i == 0 || arr[i - 1] == 0)) con++;
        }

        if (con == 1) cout << 1;
        
        else cout << 2;

        cout << endl;
    }

    return 0;
}