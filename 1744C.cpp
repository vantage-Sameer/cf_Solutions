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
        char c;
        string s;

        cin >> n >> c >> s;

        if (c == 'g'){
            cout << 0 << endl;
            continue;
        }

        vector<int> cv, gv;

        string str = s + s;

        for (int i = 0; i < n; i++){
            if (s[i] == c) cv.pb(i);
        }

        for (int i = 0; i < 2*n; i++){
            if (str[i] == 'g') gv.pb(i);
        }

        int mx = INT_MIN;

        for (int x : cv){

            auto it = upper_bound(gv.begin(), gv.end(), x);

            mx = max(mx, *it - x);
        }

        cout << mx << endl;
    }

    return 0;
}