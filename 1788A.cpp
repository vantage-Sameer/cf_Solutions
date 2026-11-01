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

        int two = 0;

        for (auto &x : arr){
            cin >> x;

            if (x == 2) two++;
        }

        if (two%2 == 1) cout << -1 << endl;

        else{
            int temp = 0, idx;

            for (int i = 0; i < n; i++){
                if (arr[i] == 2) temp++;

                if (temp == two/2){
                    idx = i;
                    break;
                }
            }

            cout << idx + 1 << endl;
        }
    }

    return 0;
}