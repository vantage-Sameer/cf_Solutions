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

        int n, m;
        cin >> n >> m;
    
        vector<ll> a(n + 1), b(m);

        for (int i = 1; i <= n; i++) cin >> a[i];
    
        for (auto &x : b) cin >> x;
    
        sort(b.begin(), b.end());
    
        ll sum = 0, l = 0;
    
        for (int i = 0; i < m; i++){

            ll temp = 0;

            for (int j = l + 1; j <= b[i]; j++) temp += a[j];
        
            sum += abs(temp);

            l = b[i];
        }
    
        for (int i = l + 1; i <= n; i++) sum += a[i];
    
        cout << sum << endl;
    }
    
    return 0;
}

