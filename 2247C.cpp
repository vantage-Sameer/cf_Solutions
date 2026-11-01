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
        int n, cnta = 0, cntb = 0;
        cin >> n;
    
        vector<int> a(n), b(n);
    
        for (auto &x : a){
            cin >> x;

            if (x) cnta++;
        }

        for (auto &x : b){
            cin >> x;

            if (x) cntb++;
        }
    
        int diff = 0, p = 0;
    
        for (int i = 0; i < n; i++){
            if (a[i] != b[i]){
                diff++;
                if (a[i] == 1) p++;
            }
        }
    
   
        if (diff == 0) cout << 0;
   
        else if (cnta == 0 || cntb == n) cout << -1;

        else if (p%2 != 0) cout << 1;
  
        else cout << 2;

        cout << endl;
    }

    return 0;
}