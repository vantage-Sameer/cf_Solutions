#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    int m = unique(arr.begin(), arr.end()) - arr.begin();

    cout << n - m << endl;

    return 0;
}