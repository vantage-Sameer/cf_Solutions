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

        map<int, int> m;

        for (auto &x : arr){
            cin >> x;
            m[x]++;
        }

        if ((int)m.size() > 2){
            cout << "NO" << endl;
            continue;
        }

        if ((int)m.size() == 1){
            cout << "YES" << endl;
            continue;
        }

        vector<int> num;;

        for (auto x : m) num.pb(x.second);

        if (abs(num[0] - num[1]) <= 1) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}