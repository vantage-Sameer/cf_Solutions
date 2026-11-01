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

        int f = -1, l = -1;

        int f1 = -1, l1 = -1;

        for (int i = 0; i < n; i++){
            if (a[i] == -1) {
                if (f == -1) f = i;
                l = i;
            }

            if (a[i] == 1) {
                if (f1 == -1) f1 = i;
                l1 = i;
            }
        }

        if (f != -1 && (f1 == -1 || f1 > f)) a[f] = 1;

        if (l != -1 && (l1 == -1 || l1 < l)) a[l] = 1;

        for (auto &x : a){
            if (x == -1) x = 0;
        }

        for (auto &x : a) cout << x << " ";

        cout << endl;
    }

    return 0;
}