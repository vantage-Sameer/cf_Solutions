#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        ll n;
        cin >> n;

        vector<ll> a(n);

        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        ll s = 0;

        for (int i = 0; i < n; i++){
            if (a[i] <= s + 1) s += a[i];

            else break;
        }
    
        cout << s + 1 << endl;

    return 0;
}