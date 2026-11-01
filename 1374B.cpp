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
        ll n;
        cin >> n;

        if (n == 1){
            cout << 0 << endl;
            continue;
        }

        int temp = n, two = 0, thr = 0;

        while (temp%2 == 0){
            temp /= 2;
            two++;
        }

        while (temp%3 == 0){
            temp /= 3;
            thr++;
        }

        if (temp != 1){
            cout << -1 << endl;
            continue;
        }

        if (two > thr){
            cout << -1 << endl;
            continue;
        }

        cout << 2*thr - two << endl;
    }

    return 0;
}