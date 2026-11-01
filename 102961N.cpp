#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> top;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;

        auto it = top.upper_bound(x);

        if (it != top.end()) top.erase(it);

        top.insert(x);
    }

    cout << top.size() << endl;

    return 0;
}