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
        int n, m;
        cin >> n >> m;

        string s1, s2;
        cin >> s1 >> s2;

        reverse(s2.begin(), s2.end());

        string str = s1 + s2;

        int count = 0;

        for (int i = 0; i < (int)str.size() - 1; i++){
            if (str[i] == str[i + 1]) count++;
        }

        if (count <= 1) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}