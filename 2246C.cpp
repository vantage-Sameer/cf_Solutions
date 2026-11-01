#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

#define MOD (int)(1e9 + 7)
#define LIM 200000

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw(LIM + 1);

    pw[0] = 1;

    for (int i = 1; i <= LIM; i++) pw[i] = (pw[i - 1]*2)%MOD;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        int neg = 0, idx = 1;

        while (idx <= n && a[idx] == -1){
            neg++;
            idx++;
        }

        vector<pair<int, int>> grp;

        while (idx <= n){
            
            int val = a[idx], count = 0;

            while (idx <= n && a[idx] == val){
                count++;
                idx++;
            }

            grp.pb({val, count});
        }

        ll en, on;

        if (neg == 0){
            en = 1;
            on = 0;
        } 
        
        else{
            en = pw[neg - 1];
            on = pw[neg - 1];
        }

        ll base = 1;

        for (int i = 0; i < (int)grp.size(); i++) base = (base*pw[grp[i].second - 1])%MOD;
        
        ll ans = (en*base)%MOD;

        int p = 0;

        for (int i = 0; i < (int)grp.size() - 1; i++){
            if (grp[i + 1].first == grp[i].first + 1) p++;
        }

        ans = (ans + ((on*base)%MOD)*p)%MOD;

        cout << ans << endl;
    }

    return 0;
}