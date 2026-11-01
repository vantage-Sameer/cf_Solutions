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

        vector<int> a(n), b(m);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        if (2*m > n){
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end());

        sort(b.begin(), b.end());

        int i = 0;

		while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) i++;

        cout << (i >= m ? "YES\n" : "NO\n");
    }

    return 0;
}