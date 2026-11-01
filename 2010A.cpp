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

        int sum = 0;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;

            if (i%2 == 1) x = -x;

            sum += x;
        }

        cout << sum << endl;
    }

    return 0;
}