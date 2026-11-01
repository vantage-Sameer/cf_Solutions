#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n, x;
        cin >> n;

        vector<int> odd, even, arr(n);

        for (auto &x : arr) cin >> x;

        for (int i = 0; i < n; i++){
            int x = arr[i];

            if (x%2 == 0) even.pb(i);

            else odd.pb(i);

            if ((int)even.size() > 1 && (int)odd.size() == 1){
                cout << odd[0] + 1 << endl;
                break;
            }

            if ((int)odd.size() > 1 && (int)even.size() == 1){
                cout << even[0] + 1 << endl;
                break;
            }
        }

    return 0;
}