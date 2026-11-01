#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    ll num = 0, den = 0;

    vector<int> p(n), a(m);

    for (auto &x : p){
        cin >> x;
        den += x;
    }

    for (auto &x : a){
        cin >> x;
        num += x;
    }

    ll r = (11*den + 9)/10; 

    if (num >= r) cout << "YES";

    else cout << "NO";

    cout << endl;

    return 0;
}