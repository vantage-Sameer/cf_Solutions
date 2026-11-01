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
        ll n;
        cin >> n;

        ll a = -1, b = -1, c = -1;

        ll rem = n;

        for (ll i = 2; i * i <= rem; i++){
            if (rem%i == 0){
                a = i;
                rem /= i;
                break;
            }
        }

        if (a == -1){
            cout << "NO" << endl;
            continue;
        }

        for (ll i = 2; i*i <= rem; i++){
            if (rem%i == 0 && i != a){
                b = i;
                rem /= i;
                break;
            }
        }

        c = rem;

        if (b == -1 || c == 1 || c == a || c == b) cout << "NO" << endl;
    
        else{
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }

    return 0;
}