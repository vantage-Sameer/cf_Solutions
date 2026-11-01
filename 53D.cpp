#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<pair<int, int>> pp;

        for (int i = 1; i <= n; i++){
            int target = a[i];

            for (int j = i; j <= n; j++){

                bool flag = false;
                if (b[j] == target){
                    for (int k = j; k > i; k--){
                        swap(b[k], b[k - 1]);

                        pp.pb({k - 1, k});
                    }
                    flag = true;
                }
                if (flag) break;
            }
        }

        cout << pp.size() << endl;

        for (auto &x : pp){
            cout << x.first << " " << x.second << endl;
        }

    return 0;
}