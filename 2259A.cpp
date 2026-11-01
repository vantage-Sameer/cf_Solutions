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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n/k; i++){
            int count = 0;

            for (int j = i*k; j < (i + 1)*k; j++) count += (s[j] == '1');

            if (count == k) ans++;
        }

        cout << ans << endl;
    }

    return 0;
}