#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, t, a, b, da, db;
    cin >> x >> t >> a >> b >> da >> db;

    for (int i = 0; i < t; i++){
        if (a - i*da == x) {
            cout << "YES\n";
            return 0;
        }
    }

    for (int i = 0; i < t; i++){
        if (b - i*db == x) {
            cout << "YES\n";
            return 0;
        }
    }

    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            if ((a - i*da) + (b - j*db) == x){
                cout << "YES\n";
                return 0;
            }
        }
    }

    if (x == 0){       
        cout << "YES\n";
        return 0;
    }

    cout << "NO\n";

    return 0;
}