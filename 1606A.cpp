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
        string s;
        cin >> s;

        int flip = 0;

        for (int i = 0; i < (int)s.size() - 1; i++){
            if (s[i] != s[i + 1]) flip++; 
        }

        if (flip%2 == 0) cout << s << endl;

        else{
           
            char c = (s[0] == 'a' ? 'b' : 'a');
            s[0] = c;
           
            cout << s << endl;
        }
             
    }

    return 0;
}