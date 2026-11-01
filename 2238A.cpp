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
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        bool flag = true;

        for (int i = 0; i < n; i++){
            if (a[i] != b[i]){
                flag = false;
                break;
            }
        }

        if (flag){
            cout << 0 << endl;
            continue;
        }

        int sum1 = 0;

        for (int i = 0; i < n; i++){
            if (a[i] < b[i]){
                sum1 = INT_MAX;
                break;
            }

            sum1 += a[i] - b[i];
        }
    
        sort(a.begin(), a.end());

        sort(b.begin(), b.end());

        bool check = false;

        int sum = 0;

        for (int i = 0; i < n; i++){
            if (a[i] < b[i]){
                check = true;
                break;
            }

            sum += a[i] - b[i];
        }

        if (check) cout << -1 << endl;

        else cout << min(sum + c, sum1) << endl;
    }

    return 0;
}