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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int mn = 0, curr = 0, l = 0, r = k - 1;

        for (int i = 0; i < k; i++){
            if (s[i] == 'W') curr++;
        }

        mn = curr;

        while (r < n && l < n){

            r++;

            if (r < n){
                if (s[r] == 'W') curr++;
            }

            else break;

            if (s[l] == 'W') curr--;

            l++;

            mn = min(curr, mn);
        }

        cout << mn << endl;
    }

    return 0;
}