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

        vector<ll> a(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        bool flag = false;

        for (int i = 1; i < n; i++){
            if (a[i] < i){
                flag = true;
                break;
            }

            a[i + 1] += a[i] - i;
            a[i] = i;
        }

        if (a[n] < n) flag = true;

        cout << (flag ? "NO\n" : "YES\n");
    }

    return 0;
}