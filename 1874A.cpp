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
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (auto &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        ll count = 0, curr = 1;

        for (auto x : arr){
            if (x >= curr){
                count += x - curr;
                curr++;
            }
        }

        cout << count << endl;
    }

    return 0;
}