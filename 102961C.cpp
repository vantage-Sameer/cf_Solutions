#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    int l = 0, r = n - 1, ans = 0;

    while (l < r && r >= 0){
        if (a[l] + a[r] <= x){
            ans++;
            l++;
            r--;
        }

        else{
            ans++;
            r--;
        }
    }

    if (l == r && a[l] <= x) ans++;

    cout << ans << endl;

    return 0;
}