#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> base(51);

    base[1] = 2;
    base[2] = 4;
    base[3] = 6;

    for (int i = 4; i < 51; i++) base[i] = base[i - 1]*2;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 2){
            cout << -1 << endl;
            continue;
        }

        for (int i = 1; i <= n; i++) cout << base[i] << " ";

        cout << endl;
    }

    return 0;
}