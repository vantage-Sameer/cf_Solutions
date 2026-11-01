#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> mp;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end()){
            cout << "OK" << endl;
            mp[s] == 0;
        }

        else{
            mp[s]++;
            cout << s << mp[s] << endl;
        }
    }

    return 0;
}