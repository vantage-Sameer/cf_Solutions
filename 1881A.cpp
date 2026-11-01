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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = -1;

        for (int i = 0; i < 6; i++){
            if (x.find(s) != string::npos){
                ans = i;
                break;
            }

            else x = x + x;
        }

        cout << ans << endl;
    }

    return 0;
}