#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll cost = 0, cnt = 0, z = 0;

    while (n--){
        int x;
        cin >> x;

        if (x < 0){
            cost += 1LL*(abs(x) - 1);
            cnt++;
        }

        else if (x == 0) z++;

        else cost += 1LL*(x - 1);
    }

    if (cnt%2 == 0) cout << cost + z << endl;

    else{
        if (z == 0) cout << cost + 2 << endl;

        else cout << cost + z << endl;
    }

    return 0;
}