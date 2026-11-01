#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n, m;
        cin >> n >> m;

        vector<string> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        vector<int> idx(m);

        for (int i = 0; i < m; i++){
            cin >> idx[i];
            idx[i]--;
        }

        set<int> st;

        for (auto &x : idx) st.insert(v[x].size());

        if (st.size() > 1){
            cout << "No" << endl;
            return 0;
        }

        auto it = st.begin();

        string ans;

        for (int i = 0; i < *it; i++){
            set<char> temp;

            for (auto &x : idx) temp.insert(v[x][i]);

            if (temp.size() > 1) ans.pb('?');

            else ans.pb(*temp.begin());
        }

        bool flag = false;

        sort(idx.begin(), idx.end());

        int t = 0;

        for (int i = 0; i < n; i++){

            if (v[i].size() != ans.size()) continue;

            if (t < m && idx[t] == i) t++;

            else{

                bool check = true;

                for (int j = 0; j < (int)ans.size(); j++){

                    if (ans[j] != v[i][j]){
                        if (ans[j] != '?'){
                            check = false;
                            break;
                        }
                    }
                }

                if (check){
                    flag = true;
                    break;
                }
            }
        }

        if (flag) cout << "No\n";

        else cout << "Yes\n" << ans << "\n";

    return 0;
}