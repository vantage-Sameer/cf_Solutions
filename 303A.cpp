#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n%2 == 0) cout << -1 << endl;

    else{
        for (int i = 0; i < n; i++){
            if (i%2 == 0) cout << i/2 << " ";

            else cout << (n + i)/2 << " ";
        }

        cout << endl;

        for (int i = 0; i < n; i++){
            if (i%2 == 0) cout << i/2 << " ";

            else cout << (n + i)/2 << " ";
        }

        cout << endl;

        for (int i = 0; i < n; i++) cout << i << " ";

        cout << endl;
    }

    return 0;
}