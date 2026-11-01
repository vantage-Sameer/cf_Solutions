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

        int x;
        cin >> x;

        if (x >= *(min_element(a.begin(), a.end())) && x <= *max_element(a.begin(), a.end())) cout << "YES";

        else cout << "NO";

        cout << endl;
    }

    return 0;
}