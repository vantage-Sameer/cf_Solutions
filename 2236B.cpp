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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool flag = true;

        for (int i = 0; i < k; i++){
            int count = 0;

            for (int j = i; j < n; j += k) if (s[j] == '1') count++;

            if (count%2 == 1){
                flag = false;
                break;
            }
        }

        if (flag) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}