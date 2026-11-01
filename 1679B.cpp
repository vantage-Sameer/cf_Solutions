#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n), lc(n);

    ll sum = 0;

    for (auto &x : a){
        cin >> x;
        sum += x;
    }

    int gc = 0, prev = -1;

    while (q--){
        int t;
        cin >> t;

        if (t == 1){
            int i, x;
            cin >> i >> x;

            i--;

            if (lc[i] != gc) sum = sum - prev + x;

            else sum = sum - a[i] + x;

            cout << sum << endl;

            a[i] = x;
            
            lc[i] = gc;
        }

        else{

            int x;
            cin >> x;

            sum = 1LL*n*x;

            cout << sum << endl;

            gc++;

            prev = x;
        }
    }

    return 0;
}