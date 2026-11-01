#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, s, p;
    cin >> k >> n >> s >> p;

    int req = (n%s == 0 ? n/s : n/s + 1);

    int t = k*req;

    int ans = (t%p == 0 ? t/p : t/p + 1);

    cout << ans << endl;

    return 0;
}