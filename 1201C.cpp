#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        int mid = n/2;

        for (int i = mid; i < n - 1; i++){
            ll cost = 1LL*(a[i + 1] - a[i])*(i - mid + 1);

            if (cost > k){
                cout << a[i] + k/(i - mid + 1) << endl;
                return 0;
            }

            k -= cost;
        }

        cout << a[n - 1] + k/(n - mid) << endl;

    return 0;
}