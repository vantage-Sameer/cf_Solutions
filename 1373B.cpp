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
        string s;
        cin >> s;

        int one = 0;

        for (auto c : s){
            if (c == '1') one++;
        }

        int count = min(one, (int)s.size() - one);

        if (count%2 == 1) cout << "DA" << endl;

        else cout << "NET" << endl;
    }

    return 0;
}