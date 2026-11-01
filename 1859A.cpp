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

        bool flag = true;

        for (int i = 0; i < n - 1; i++){
            if (arr[i] != arr[i + 1]){
                flag = false;
                break;
            }
        }

        if (flag) cout << -1 << endl;

        else{
            int val = *(max_element(arr.begin(), arr.end()));

            int count = 0;

            for (auto x : arr){
                if (x == val) count++;
            }

            cout << n - count << " " << count << endl;

            for (auto x : arr){
                if (x != val) cout << x << " ";
            }

            cout << endl;

            while(count--) cout << val << " ";

            cout << endl;
        }
    }

    return 0;
}