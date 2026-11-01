#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        int ans = 0;

        for (int i = 0; i < k; i++){

            int one = 0, two = 0;

            for (int j = i; j < n; j += k){
                if (arr[j] == 1) one++;

                else two++;
            }

            ans += (n/k) - max(one, two);
        }

        cout << ans << endl;

    return 0;
}