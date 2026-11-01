#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int count = 1, curr = 0;

    vector<int> arr(n);

    for (auto &x : arr) cin >> x;

    for (int i = 0; i < n; i++){
        if (arr[i] <= m - curr) curr += arr[i];

        else{
            count++;
            curr = arr[i];
        }
    }

    cout << count << endl;

    return 0;
}