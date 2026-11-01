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

        vector<string> m = {"00", "25", "50", "75"};

        int n = s.size();

        int ans = INT_MAX;

        for (int i = n - 1; i >= 0; i--){

            for (int j = 0; j < 4; j++){
                if (s[i] == m[j][1]){

                    for (int k = i - 1; k >= 0; k--){
                        if (s[k] == m[j][0]){
                            ans = min(ans, (n - 1 - i) + (i - k - 1));
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}