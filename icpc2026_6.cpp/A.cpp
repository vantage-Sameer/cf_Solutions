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

        int t = (n*(n + 1))/2;

        cout << t*t << endl;
    }

    return 0;
}