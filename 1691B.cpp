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

        for (auto &x : arr) cin >> x;

        vector<int> ans(n);

        bool flag = true;

        int i = 0;

        while (i < n){
            int j = i;

            while (j < n && arr[j] == arr[i]) j++;

            int len = j - i;

            if (len == 1){
                flag = false;
                break;
            }

            int curr = i;

            while (len > 0){

                if (len == 3){
                    ans[curr] = curr + 2;
                    ans[curr + 1] = curr;
                    ans[curr + 2] = curr + 1;
                    curr += 3;
                    len -= 3;
                }

                else{
                    ans[curr] = curr + 1;
                    ans[curr + 1] = curr;
                    curr += 2;
                    len -= 2;
                }
            }

            i = j;
        }

        if (!flag) {
            cout << -1 << endl;
            continue;
        }

        for (int &x : ans) cout << x + 1 << " ";

        cout << endl;
    }

    return 0;
}