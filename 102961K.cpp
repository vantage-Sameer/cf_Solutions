#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;

        a[x] = i;
    }

    int ans = 1;

    for (int i = 1; i < n; i++){
        if (a[i] > a[i + 1]) ans++;
    }

    cout << ans << endl;

    return 0;
}