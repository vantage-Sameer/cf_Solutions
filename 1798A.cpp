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

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;


        bool flag1 = true, flag2 = true;


        for (int i = 0; i < n - 1; i++){
            if (a[i] > a[n-1] || b[i] > b[n-1]){
                swap(a[i], b[i]);
                if (a[i] > a[n-1] || b[i] > b[n-1]){
                    flag1 = false;
                    swap(a[i], b[i]);
                    break;
                }
                swap(a[i], b[i]);
            }
        }

        swap(a[n-1], b[n-1]);

        for (int i = 0; i < n - 1; i++){
            if (a[i] > a[n-1] || b[i] > b[n-1]){
                swap(a[i], b[i]);
                if (a[i] > a[n-1] || b[i] > b[n-1]){
                    flag2 = false;
                    swap(a[i], b[i]);
                    break;
                }
                swap(a[i], b[i]);
            }
        }


        if (flag1 || flag2) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}