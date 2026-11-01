#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;

        int p = n - k;

        int num = 0;

        while ((num + 1)*num/2 <= p) num++;

        vector<int> arr(k + 1);

        arr[1] = 1;

        int q = num*(num - 1)/2;

        int r = p - q;

        int idx = 2;

        for (int i = 1; i <= num && idx <= k; i++){
            arr[idx] = arr[idx - 1] + i;
            idx++;
        }

        if (idx <= k){
            arr[idx] = arr[idx - 1] + r + 1;
            idx++;
        }

        while (idx <= k){
            arr[idx] = arr[idx - 1] + 1;
            idx++;
        }

        for (int i = 1; i <= k; i++) cout << arr[i] << " ";

        cout << endl;
    }

    return 0;
}