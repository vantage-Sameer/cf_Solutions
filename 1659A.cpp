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
        int n, r, b;
        cin >> n >> r >> b;

        int p = r/(b + 1), q = r%(b + 1);

        int count = 0;

        for (int i = 0; i < b + 1; i++){
            for (int j = 0; j < p; j++) cout << "R";

            if (count < q){
                cout << "R";
                count++;
            }

            if (i != b) cout << "B";
        }

        cout << endl;
    }

    return 0;
}