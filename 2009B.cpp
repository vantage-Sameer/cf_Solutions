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

        vector<int> note;

        while(n--){
            string s;
            cin >> s;

            for (int i = 0; i < 4; i++){
                if (s[i] == '#') note.pb(i + 1);
            }
        }

        reverse(note.begin(), note.end());

        for (auto x : note) cout << x << " ";

        cout << endl;
    }

    return 0;
}