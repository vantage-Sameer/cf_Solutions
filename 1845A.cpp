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
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            while(n--) cout << 1 << " ";
            cout << endl;
            continue;
        }

        if (k < 2){
            cout << "NO" << endl;
            continue;
        }

        if (n%2 == 0){
            cout << "YES" << endl << n/2 << endl;
            int a = n/2;
            while(a--) cout << 2 << " ";
            cout << endl;
            continue;
        }

        if (k < 3) cout << "NO" << endl;

        else{
            cout << "YES" << endl;
            cout << 1 + (n - 3)/2 << endl;
            cout << 3 << " ";
            int a = (n - 3)/2;
            while(a--) cout << 2 << " ";
            cout << endl;
        }
    }

    return 0;
}