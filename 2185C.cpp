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

        sort(a.begin(), a.end());

        a.erase(unique(a.begin(), a.end()), a.end());

        int mx = 1, cnt = 1;

        for (int i = 1; i < a.size(); i++) {
            if (a[i] == a[i - 1] + 1) cnt++;

            else cnt = 1;

            mx = max(mx, cnt);
        }

        cout << mx << endl;
    }

    return 0;
}