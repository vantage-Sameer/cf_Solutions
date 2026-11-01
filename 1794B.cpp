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

        vector<ll> arr(n);

        for (auto &x : arr){
            cin >> x;

            x++;
        }

        for (int i = 0; i < n - 1; i++){
            if (arr[i + 1]%arr[i] == 0) arr[i + 1]++;
        }

        for (auto x : arr) cout << x << " ";

        cout << endl;
    }

    return 0;
}