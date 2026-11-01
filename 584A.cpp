#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    if (t == 10){
        if (n == 1) cout << -1;
        
        else{
            cout << 1;
            for (int i = 0; i < n - 2; i++) cout << 0;

            cout << 0;
        }

    } 
    
    else{
        cout << t;
        for (int i = 0; i < n - 1; i++) cout << 0;
    }

    return 0;

}