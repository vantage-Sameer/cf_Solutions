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

        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++) cin >> arr[i];

        int count = 0;

        for (int i = 1; i <= n; i++){
            int r = arr[i] - i%arr[i], p = i%arr[i];

            int l = (r > p ? r - p : arr[i] + r - p);

            for (int j = i + l; j <= n; j += arr[i]){
                if (1LL*arr[i]*arr[j] == i + j) count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}