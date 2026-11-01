#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> pp;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        pp.pb({(10 - x%10)%10, x});
    }

    sort(pp.begin(), pp.end());

    for (int i = 0; i < n && k > 0; i++){

        int cost = pp[i].first;

        if (cost <= k){
            pp[i].second += cost;
            k -= cost;
        }
    }

    for (int i = 0; i < n && k >= 10; i++){

        int r = (100 - pp[i].second)/10;
        
        int val = min(r, k/10);

        pp[i].second += val*10;

        k -= val*10;
    }

    int ans = 0;

    for (auto &x : pp) ans += x.second/10;

    cout << ans << endl;

    return 0;
}