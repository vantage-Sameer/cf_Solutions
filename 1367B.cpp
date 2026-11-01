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

        int o = 0, e = 0;

        for (int i = 0; i < n; i++){
            if ((a[i] - i)%2){
                if (i%2) o++;

                else e++;
            }
        }

        if (o != e) cout << -1 << endl;
       
        else cout << e << endl; 
    }

    return 0;
}