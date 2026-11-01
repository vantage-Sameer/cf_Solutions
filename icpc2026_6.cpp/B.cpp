#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true){
        int n;
        cin >> n;

        if (n == 0) break;

        string s;
        cin >> s;

        string ans = s;

        vector<int> pi(n);

        for(int i = 1; i < n; i++){
            int j = pi[i-1];

            while(j > 0 && s[i] != s[j]) j = pi[j-1];

            if(s[i] == s[j]) j++;

            pi[i] = j;
        }

        int k = pi[n-1];

        for(int i = k; i < n; i++) ans.pb(s[i]);

        cout << ans << endl;
    }

    return 0;
}