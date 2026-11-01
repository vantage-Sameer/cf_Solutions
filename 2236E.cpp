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

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        if (n == 1){
            cout << 0 << endl;
            continue;
        }

        if (n == 2){
            cout << 1 << endl;
            continue;
        }

        
    }

    return 0;
}