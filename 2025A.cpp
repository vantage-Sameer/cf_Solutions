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
        string p, q;
        cin >> p >> q;

        int a = (int)p.size(), b = (int)q.size();

        int i = 0, count = 0;

        while (i < min(a, b) && p[i] == q[i]){
            count++;
            i++;
        }

        if (count == 0) cout << a + b << endl;

        else cout << 1 + a + b - count << endl;
    }

    return 0;
}