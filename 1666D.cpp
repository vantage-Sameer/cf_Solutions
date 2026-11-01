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
        string s, t;
        cin >> s >> t;

        map<char, int> mp;

        for (char c : t) mp[c]++;

        int i = s.size() - 1;

        bool flag = true;

        for (int j = t.size() - 1; j >= 0; j--){

            while (i >= 0 && s[i] != t[j]){
                if (mp[s[i]]) {
                    flag = false;
                    break;
                }
                i--;
            }

            if (!flag || i < 0){
                flag = false;
                break;
            }

            mp[t[j]]--;
            i--;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}