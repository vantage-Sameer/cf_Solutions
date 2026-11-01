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

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        int mx = *(max_element(a.begin(), a.end()));

        int mn = *(min_element(a.begin(), a.end()));

        cout << mx - mn + 1 << endl; 
    }

    return 0;
}