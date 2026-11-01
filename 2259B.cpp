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

        vector<int> a(n);

        for (auto &x : a) cin >> x;

        int odd = 0, oe = 0, ee = 0;

        for  (auto &x : a){
            if (x%2 == 1) odd++;

            else{
                if ((x/2)%2 == 1) oe++;

                else ee++;
            }
        }

        cout << max({odd, oe, ee}) << endl;
    }

    return 0;
}