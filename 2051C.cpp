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
        int n, m, k;

        cin >> n >> m >> k;

        vector<int> a(m);

        for (auto &x : a) cin >> x;

        unordered_map<int, int> mp;

        for (int i = 0; i < k; i++){

            int x;
            cin >> x;

            mp[x]++;
        }

        if (k < n - 1){
            for (int i = 0; i < m; i++) cout << 0;

            cout << endl;

            continue;
        }

        if (k == n){
            for (int i = 0; i < m; i++) cout << 1;

            cout << endl;

            continue;
        }

        int idx = -1;

        for (int i = 0; i < m; i++){
            if (mp.count(a[i]) == 0){
                cout << 1;
                idx = i;

                break;
            }

            cout << 0;
        }

        if (idx != -1) for (int i = idx + 1; i < m; i++) cout << 0;

        cout << endl;

    }

    return 0;
}