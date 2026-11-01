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

        int sum = 0, x;

        while (n > 1){
            cin >> x;
            sum += x;
            n--;
        }

        cout << -sum << endl;
    }

    return 0;
}