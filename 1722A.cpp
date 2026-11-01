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

        string s;
        cin >> s;

        sort(s.begin(), s.end());

        string str = "Timru";

        if (s == str) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}