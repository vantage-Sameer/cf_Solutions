#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    int z = 0, f = 0;

    for (auto &x : arr){
        cin >> x;

        if (x == 0) z++;

        else f++;
    }

    if (z == 0){
        cout << -1 << endl;
        return 0;
    }

    if (f < 9) cout << 0 << endl;

    else{
        for (int i = 0; i < (f/9)*9; i++) cout << 5;

        while (z--) cout << 0;

        cout << endl;
    }

    return 0;
}