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

        vector<string> arr;

        for (int i = 0; i < 2*(n - 1); i++){
            string str;
            cin >> str;

            if (str.length() == n - 1) arr.pb(str);
        }

        reverse(arr[0].begin(), arr[0].end());

        if (arr[0] == arr[1]) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}