#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> mp;

    int sum = 0, mx = 0;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        mp[a]++;

        mp[b + 1]--;
    }

    for (auto &x : mp){
        sum += x.second;

        mx = max(mx, sum);
    }

    cout << mx << endl;

    return 0;
}