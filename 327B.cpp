#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int curr = (int)(1e5);

    for (int i = 0; i < n; i++){
        cout << curr << " ";

        curr++;
    }

    cout << endl;

    return 0;
}