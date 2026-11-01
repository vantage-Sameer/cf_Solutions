#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p;
    cin >> p;

    int MAX = p, count = 0;
        
        for (int m = 2; m*m <= MAX; m++){
            for (int n = 1; n < m; n++){

                if (((m-n)&1)==0) continue; 
                
                if (__gcd(m,n) != 1) continue;

                int c = m*m + n*n;

                if (c > MAX) continue;

                for (int k = 1; k*c <= MAX; k++) count++;
            }
        }

        cout << count << endl;

    return 0;
}