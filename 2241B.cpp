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
        ll x;
        cin >> x;

        int count = 0;

        while (x){
            x/= 10;
            count++;
        }

        count--;

        cout << 1;

        for (int i = 0; i < count; i++) cout << 0;

        cout << 1 << endl;
    }

    return 0;
}