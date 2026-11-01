#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vector<int> ab, ba;

    for (int i = 0; i < n; i++){

        if (s[i] == 'a' && t[i] == 'b') ab.pb(i + 1); 

        else if (s[i] == 'b' && t[i] == 'a') ba.pb(i + 1);
    }

    if ((ab.size() + ba.size())%2 != 0){
        cout << -1 << endl;
        return 0;
    }

    vector<pair<int, int>> ans;

    while ((int)ab.size() >= 2){
        int i = ab.back(); 
        
        ab.pop_back();

        int j = ab.back(); 
        
        ab.pop_back();

        ans.pb({i, j});
    }

    while (ba.size() >= 2){
        int i = ba.back(); 
        
        ba.pop_back();

        int j = ba.back();
        
        ba.pop_back();

        ans.push_back({i, j});
    }

    if (!ab.empty() && !ba.empty()){

        int i = ab.back(), j = ba.back();

        ans.pb({i, i});

        ans.pb({i, j});
    }

    cout << ans.size() << endl;

    for (auto &x : ans) cout << x.first << " " << x.second << endl;

    return 0;
}