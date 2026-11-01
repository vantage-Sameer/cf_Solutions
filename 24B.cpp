#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

typedef struct d{
    int points;
    int pos[50];
}d;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int p[] = {25, 18, 15, 12, 10, 8, 6, 4, 2, 1};

    map<string, d> drivers;

    while (t--) {
        int n;
        cin >> n;

        for (int temp = 0; temp < n; temp++){
            string s;
            cin >> s;

            if (drivers.find(s) == drivers.end()){
                drivers[s].points = 0;

                for (int i = 0; i < 50; i++) drivers[s].pos[i] = 0;
            }

            if (temp < 10) drivers[s].points += p[temp];

            drivers[s].pos[temp]++;
        }
    }

    int mxp = 0, mxw = 0;

    for (auto x : drivers){
        if ((x.second).points > mxp) mxp = (x.second).points;

        if ((x.second).pos[0] > mxw) mxw = (x.second).pos[0];
    }

    map<string, vector<int>> rule1, rule2;

    for (auto x : drivers){
        if ((x.second).points == mxp){
            for (int i = 0; i < 50; i++) rule1[x.first].pb((x.second).pos[i]);
        }
    }

    string win1;

    vector<int> z(50, 0);

    for (auto x : rule1){
        if ((x.second) > z){
            win1 = (x.first);
            for (int i = 0; i < 50; i++) z[i] = (x.second)[i];
        }
    }

    cout << win1 << endl;

    for (auto x : drivers){
        if ((x.second).pos[0] == mxw){
            for (int i = 1; i < 50; i++) rule2[x.first].pb((x.second).pos[i]);

            rule2[x.first].insert(rule2[x.first].begin(), (x.second).points);
        }
    }

    string win2;

    vector<int> y(50, 0);

    for (auto x : rule2){
        if ((x.second) > y){
            win2 = (x.first);
            for (int i = 0; i < 50; i++) y[i] = (x.second)[i];
        }
    }

    cout << win2 << endl;

    return 0;
}