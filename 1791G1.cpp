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
        ll n, c;
        cin >> n >> c;

        vector<ll> arr(n + 1), temp;

        for (int i = 1; i <= n; i++){
            cin >> arr[i];

            temp.pb(i + arr[i]);
        }

        sort(temp.begin(), temp.end());

        ll bal = c, ans = 0;

        for (auto &x : temp){
            if (bal < x) break;

            else{
                bal -= x;
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}