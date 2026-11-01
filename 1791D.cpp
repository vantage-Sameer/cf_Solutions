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

        map<char, int> m, d;

        for (int i = 0; i < n; i++) m[s[i]]++;

        int mx = 0;

        for (int i = 0; i < n; i++){
            m[s[i]]--;

            if (m[s[i]] == 0) m.erase(s[i]);
            d[s[i]]++;

            mx = max(mx, (int)m.size() + (int)d.size());
        }

        cout << mx << endl;
    }

    return 0;
}