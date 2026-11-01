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
        
        string s, st;
        cin >> s >> st;

        sort(s.begin(), s.end());

        sort(st.begin(), st.end());

        cout << (s == st ? "YES\n" : "NO\n");
    }

    return 0;
}