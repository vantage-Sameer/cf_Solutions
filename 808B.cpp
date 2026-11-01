#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        long double sum = 0;

        for (int i = 0; i < n; i++) sum += (long double)arr[i]*(min(i, n - k) - max(0, i - k + 1) + 1);

        cout << fixed << setprecision(10) << sum / (long double)(n - k + 1) << endl;

    return 0;
}