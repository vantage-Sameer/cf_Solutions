#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a;

        map<int, int> mp;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        for (auto &x : mp) a.pb(x.first);

        sort(a.rbegin(), a.rend());

        vector<int> res;

        while (!a.empty()){
            vector<int> nxt;

            for (auto &x : a){
                res.pb(x);
                mp[x]--;

                if (mp[x] > 0) nxt.pb(x);
            }

            a = nxt;
        }

        for (auto &x : res) cout << x << " ";

        cout << endl;
    }

    return 0;
}