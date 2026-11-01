#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);
        
        map<ll, ll> m;

        for (auto &x : arr){
            cin >> x;
            m[x]++;
        }

        ll bal = x, count = 0, lev = 0, ans = 0;

        bool flag = false;

        for (auto p : m){

            if (count == 0){
                lev = p.first;
                count += p.second;
                ans = lev;
                continue;
            }

            ll gap = p.first - lev;

            ll d = gap*count;

            if (d <= bal){
                bal -= d;
                lev = p.first;
                ans = lev;
                count += p.second;
            }

            else{
                ans = lev + bal/count;
                flag = true;
                break;
            }
        }

        if (!flag) ans = lev + bal / n;

        cout << ans << endl;
    }

    return 0;
}