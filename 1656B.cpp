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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);

        bool flag = false;

        for (auto &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        int l = 0, r = 1;

        while (l < n && r < n){

            if (l == r) r++;
    
            else{
                ll diff = arr[r] - arr[l];

                if (diff == k){
                    flag = true;
                    break;
                }

                else if (diff < k) r++;
        
                else l++;
            }
        }
        
        if (flag) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}