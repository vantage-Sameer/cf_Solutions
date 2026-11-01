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

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) cin >> a[i];

    bool flag = false;

    for (int i = 0; i < n; i++){
        if (mp.count(x - a[i])){
            cout << mp[x - a[i]] + 1 << " " << i + 1 << endl;
            flag = true;
            break;
        }

        mp[a[i]] = i;
    }

    if (!flag) cout << -1 << endl;

    return 0;
}