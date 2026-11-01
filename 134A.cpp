#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    int sum = 0;

    for (auto &x : a){
        cin >> x;
        sum += x;
    }

    vector<int> ans;

    for (int i = 0; i < n; i++){
        int val = (sum - a[i])/(n - 1), r = (sum - a[i])%(n - 1);

        if (r == 0 && val == a[i]) ans.pb(i + 1);
    }

    cout << ans.size() << endl;

    for (auto &x : ans) cout << x << " ";

    cout << endl;

    return 0;
}