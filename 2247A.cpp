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

        int cnt = 0;

        for (auto &x : a){
            cin >> x;

            if (x == 1) cnt++;
        }

        cout << (abs(n - 2*cnt)%4 == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}