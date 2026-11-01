#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x; int mn = INT_MAX;

    for (int i = 0; i < n; i++){
        cin >> x;

        mn = min(abs(x), mn);
    }

    cout << mn << endl;

    return 0;
}