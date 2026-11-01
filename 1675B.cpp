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

        bool flag = false;

        int count = 0;

        for (int i = n - 1; i >= 1; i--){

            if (arr[i] == 0 && i != 0){
                flag = true;
                break;
            }
            
            if (arr[i - 1] >= arr[i]){
                while (arr[i - 1] >= arr[i]){
                    arr[i - 1] /= 2;
                    count++;
                }
            }
        }

        if (flag) cout << -1 << endl;

        else cout << count << endl;
    }

    return 0;
}