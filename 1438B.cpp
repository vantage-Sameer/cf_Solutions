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
        ll n;
        cin >> n;

        vector<ll> b(n);

        for (auto &x : b) cin >> x;

        set<ll> st;

        bool flag = false;

        for (auto x : b){
            if (st.count(x)){
                flag = true;
                break;
            }

            else st.insert(x);
        }

        if (flag) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}