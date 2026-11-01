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

        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        int count1 = 0, count2 = 0;

        if (a-1 >= 1) count1++;

        if (a+1 <= n) count1++;

        if (b-1 >= 1) count1++;

        if (b+1 <= m) count1++;

        if (c-1 >= 1) count2++;

        if (c+1 <= n) count2++;

        if (d-1 >= 1) count2++;

        if (d+1 <= m) count2++;

        cout << min(count1, count2) << endl;
    }

    return 0;
}