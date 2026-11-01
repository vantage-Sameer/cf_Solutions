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

        if (n == 2){
            cout << a[0] << " " << a[1] << endl;
            continue;
        }

        bool flag = true;

        for (int i = 0; i < n - 2; i++){
            if (a[i + 2] != a[i]%a[i + 1]){
                flag = false; 
                break;
            }
        }

        if (!flag) cout << -1 << endl;

        else cout << a[0] << " " << a[1] << endl;
    }

    return 0;
}