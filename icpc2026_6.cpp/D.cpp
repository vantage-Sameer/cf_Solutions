#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<int> func(vector<int> a){
    vector<int> runs;

    int cnt = 1;

    for(int i = 1; i < (int)a.size(); i++){
        if(a[i] == a[i - 1]) cnt++;

        else{
            runs.pb(cnt);
            cnt = 1;
        }
    }

    runs.pb(cnt);

    return runs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true){
        int n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) break;

        vector<string> a(n);

        for (auto &x : a) cin >> x;

        bool flag = true;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                int x = (a[i][j] == '#');
                int x1 = (a[i][0] == '#');
                int x2 = (a[0][j] == '#');
                int x3 = (a[0][0] == '#');

                if((x ^ x1 ^ x2 ^ x3) != 0) flag = false;
            }
        }

        if(!flag){
            cout << -1 << endl;
            continue;
        }

        vector<int> R(n), C(m);

        for(int i = 0; i < n; i++) R[i] = (a[i][0] != a[0][0]);
        

        for(int j = 0; j < m; j++) C[j] = (a[0][j] != a[0][0]);
        

        vector<int> rrun = func(R), crun = func(C);

        int k = -1;

        for(int i = 1; i < (int)rrun.size() - 1; i++){
            if(k == -1) k = rrun[i];

            else if(k != rrun[i]) flag = false;
        }

        for(int i = 1; i < (int)crun.size() - 1; i++){
            if(k == -1) k = crun[i];

            else if(k != crun[i]) flag = false;
        }

        if(!flag){
            cout << -1 << endl;
            continue;
        }

        if(k == -1){
            cout << 0 << endl;
            continue;
        }

        if(rrun.front() > k || rrun.back() > k || crun.front() > k || crun.back() > k){
            cout << -1 << endl;
            continue;
        }

        cout << k << endl;
    }

    return 0;
}