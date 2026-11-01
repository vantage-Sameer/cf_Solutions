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

        int l, r, curr = n - 1;

        for (int i = 0; i < n; i++){
            if (a[i] == n){
                l = i - 1;
                r = i + 1;
                break;
            }
        }

        while (true){
            if (l >= 0 && a[l] == curr){
                l--;
                curr--;
            }

            else if (r < n && a[r] == curr){
                r++;
                curr--;
            }

            else break;

        }

        cout << (curr == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}