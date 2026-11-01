#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);

    for (auto &x : a) cin >> x;

    for (auto &x : b) cin >> x;

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    int i = 0, j = 0, ans = 0;

    while (i < n && j < m){
        if ((a[i] + k) >= b[j] && (a[i] - k) <= b[j]){
            ans++;
            i++;
            j++;
        }

        else if (a[i] + k < b[j]) i++;

        else j++;
    }

    cout << ans << endl;

    return 0;
}