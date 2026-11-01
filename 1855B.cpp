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
        ll n;
        cin >> n;

        ll num = 1;

        while(true){

            if (n%num == 0) num++;

            else break;
        }

        num--;

        cout << num << endl;
    }

    return 0;
}