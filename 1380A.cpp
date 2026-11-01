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

        bool flag = false;

        for (int i = 0; i < n - 2; i++){
            if (arr[i] < arr[i + 1] && arr[i + 2] < arr[i + 1]){
                flag = true;
                cout << "YES" << endl << i + 1 << " " << i + 2 << " " << i + 3 << endl;
                break;
            }
        }

        if (!flag) cout << "NO" << endl;
    }

    return 0;
}