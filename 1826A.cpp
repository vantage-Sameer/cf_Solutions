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

        int count = -1;

        for (int i = 0; i <= n; i++){

            int temp = 0;

            for (int x : a) temp += (x > i);

            if (temp == i){
                count = i;
                break;
            }
        }

        cout << count << endl;
        
    }

    return 0;
}