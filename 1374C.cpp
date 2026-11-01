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

        int count = 0, sum = 0;

        for (auto &x : s){
            if (x == '(') sum++;

            else sum--;

            if (sum < 0){
                count++;
                sum = 0;
            }
        }

        cout << count << endl;
    }

    return 0;
}