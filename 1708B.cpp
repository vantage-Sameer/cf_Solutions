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
        
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> arr(n + 1);

        bool flag = true;

        for (ll i = 1; i <= n; i++){
            arr[i] = ((l - 1)/i + 1)*i;

            if (arr[i] > r){
                flag = false;
                break;
            }
        }

        if (!flag) cout << "NO" << endl;

        else{
            cout << "YES" << endl;

            for (int i = 1; i <= n; i++) cout << arr[i] << " ";

            cout << endl;
        }
    }

    return 0;
}