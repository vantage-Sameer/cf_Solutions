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

        map<int, int> ma, mb;

        int i = 0;

        while (i < n){
            int x = a[i], count = 0;

            while (i < n && a[i] == x){
                count++;
                i++;
            }

            if (ma[x] < count) ma[x] = count;
        }

        i = 0;

        while (i < n){
            int x = b[i], count = 0;

            while (i < n && b[i] == x){
                count++;
                i++;
            }

            if (mb[x] < count) mb[x] = count;
        }

        int mx = INT_MIN;

        for (auto x : ma) mx = max(mx, ma[x.first] + mb[x.first]);

        for (auto x : mb) mx = max(mx, ma[x.first] + mb[x.first]);

        cout << mx << endl;
    }

    return 0;
}