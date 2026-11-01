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

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        sort(a.rbegin(), a.rend());

        bool flag = false;

        for (int i = 0; i < n - 1; i++){
            flag = (a[i] == a[i + 1]);

            if (flag) break;
        }

        if (flag) cout << -1;

        else for (auto &x : a) cout << x << " ";

        cout << endl;
    }

    return 0;
}