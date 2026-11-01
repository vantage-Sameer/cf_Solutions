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

        int count = 0;

        for (int i = 0; i < n - 1; i++){
            if (arr[i]%2 == arr[i + 1]%2) count++;
        }

        cout << count << endl;
    }

    return 0;
}