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

        int odd = 0;

        for (auto &x : arr){
            cin >> x;

            if (x%2 == 1) odd++;
        }

        if (odd%2 == 1) cout << "NO" << endl;

        else cout << "YES" << endl;
    }

    return 0;
}