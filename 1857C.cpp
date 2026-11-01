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

        int s = (n*(n - 1))/2;

        vector<int> arr(s);

        for (auto &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        int count = n - 1, i = 0;

        while (count > 0 && i < s){
            cout << arr[i] << " ";

            i += count;

            count--;
        }

        cout << (int)(1e9) << endl;
    }

    return 0;
}