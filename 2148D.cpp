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
        int n;
        cin >> n;

        vector<int> arr(n);

        bool flag = false;

        for (auto &x : arr){
            cin >> x;

            if ((x&1) == 1) flag = true;
        }

        vector<int> odd;

        ll sum = 0;

        for (auto &x : arr){
            if ((x&1) == 1) odd.pb(x);

            else{
                if (flag) sum += x;
            }
        }

        if (odd.empty()){
            cout << 0 << endl;
            continue;
        }

        sort(odd.rbegin(), odd.rend());

        int l = (int)odd.size();

        for (int i = 0; i < (l + 1)/2; i++) sum += odd[i];

        cout << sum << endl;
    }

    return 0;
}