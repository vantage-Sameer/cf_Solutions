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

        vector<pair<int, int>> pp;

        for (int i = 0; i < n; i++) pp.push_back({arr[i], i});

        sort(pp.rbegin(), pp.rend());

        int a = 1, b = -1;

        vector<int> ans(n);

        ll sum = 0;

        for (int i = 0; i < n; i++){
            if (i%2 == 0){
                ans[pp[i].second] = a;

                sum += 1LL*(a)*(pp[i].first);

                a++;
            }

            else{
                ans[pp[i].second] = b;

                sum += 1LL*(abs(b))*(pp[i].first);

                b--;
            }
        }

        cout << 2*sum << endl << 0 << " ";

        for (auto &x : ans) cout << x << " ";

        cout << endl;
    }

    return 0;
}