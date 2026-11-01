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

    for (int i = 0; i < n; i++){
        int b, d;
        cin >> b >> d;

        mp[b]++;

        mp[d]--;
    }

    ll sum = 0, mx = 0;

    for (auto &x : mp){
        sum += x.second;

        mx = max(mx, sum);
    }

    sum = 0;

    for (auto &x : mp){
        sum += x.second;

        if (sum == mx){
            cout << x.first << " " << mx << endl;
            break;
        }
    }

    return 0;
}