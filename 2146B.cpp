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
        int n, m;
        cin >> n >> m;

        vector<int> freq(m + 1, 0);

        for (int i = 0; i < n; i++){
            int l;
            cin >> l;

            while(l--){
                int x;
                cin >> x;

                freq[x]++;
            }
        }

        if (n < 3){
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        for (int i = 1; i <= m; i++){
            if (freq[i] == 0){
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}