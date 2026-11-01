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

        if (n%2 == 1){
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        vector<int> v = a;

        sort(v.begin(), v.end());

        if (v[n/2 - 1] + 1 == v[n/2]){
            cout << "NO" << endl;
            continue;
        }
        
        int med = v[n/2 - 1] + 1;

        int i = 0;

        while (i < n){
            if (a[i] <= med || a[i + 1] >= med){
                flag = false;
                break;
            }

            i += 2;
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}