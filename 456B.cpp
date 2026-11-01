#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s == "0"){
        cout << 4 << endl;
        return 0;
    }

    int ans[] = {4, 0, 0, 0}, num, n = (int)s.size();

    if (n == 1) num = (int)s[0] - 48;

    else num = (int)s[n - 1] - 48 + 10*((int)s[n - 2] - 48);

    cout << ans[num%4] << endl;

    return 0;
}