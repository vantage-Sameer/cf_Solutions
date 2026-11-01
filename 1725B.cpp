#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n, d;
        cin >> n >> d;

        vector<int> p(n);

        for (auto &x : p) cin >> x;

        sort(p.begin(), p.end());

        int l = 0, r = n - 1, ans = 0;

        while (l <= r){
            int q = d / p[r] + 1;      

            if (l + q - 1 <= r){
                ans++;
                l += q - 1;            
                r--;                      
            }

            else break;
        }

        cout << ans << endl;

    return 0;
}