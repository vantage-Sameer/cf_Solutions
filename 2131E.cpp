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

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        if (a[n - 1] != b[n - 1]){
            cout << "NO\n";
            continue;
        }

        bool flag = true;

        for (int i = n - 2; i >= 0; i--){
            if (a[i] == b[i]) continue;

            int x = a[i]^b[i];

            if (x != a[i+1] && x != b[i+1]){
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}