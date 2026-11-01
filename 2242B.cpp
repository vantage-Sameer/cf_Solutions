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

        vector<int> arr(n), c1(n), c2(n);

        vector<int> p(n + 1), q(n + 1), r(n + 1);

        for (int i = 0; i < n; i++){
            cin >> arr[i];

            p[i + 1] = p[i];
            q[i + 1] = q[i];
            r[i + 1] = r[i];

            if (arr[i] == 1) p[i + 1]++;

            else if (arr[i] == 2) q[i + 1]++;

            else r[i + 1]++;
        }

        for (int i = 0; i < n; i++){

            c1[i] = p[i + 1] - q[i + 1] - r[i + 1];

            c2[i] = p[i + 1] + q[i + 1] - r[i + 1];
        }

        int mn = INT_MAX;

        bool flag = false;

        for (int j = 1; j <= n - 2; j++){

            if (c1[j - 1] >= 0) mn = min(mn, c2[j - 1]);

            if (mn != INT_MAX && c2[j] >= mn){
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}