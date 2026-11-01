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
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool flag = false;

        unordered_map<string, int> pos;

        for (int i = 0; i + 1 < s.size(); i++){

            string curr = s.substr(i, 2);

            if (pos.count(curr)){
                if (i - pos[curr] >= 2) flag = true;
            } 
        
            else pos[curr] = i;
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}