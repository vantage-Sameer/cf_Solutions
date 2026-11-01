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

        set<int> s;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            s.insert(arr[i]);
        }

        int l = 0, r = n - 1;

        bool flag = false;

        while (l < r){

            int mn = *s.begin(), mx = *prev(s.end());

            bool p = false, q = false;

            if (arr[l] != mn && arr[l] != mx) p = true;

            else {
                s.erase(arr[l]);
                l++;
            }

            if (l > r) break;

            mn = *s.begin();
            mx = *prev(s.end());

            if (arr[r] != mn && arr[r] != mx) q = true;

            else {
                s.erase(arr[r]);
                r--;
            }

            if (p && q){
                cout << l + 1 << " " << r + 1 << endl;
                flag = true;
                break;
            }
        }

        if (!flag) cout << -1 << endl;
    }

    return 0;
}