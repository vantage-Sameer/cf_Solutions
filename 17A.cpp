#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<int> pre(){
    vector<int> v(1001, 1);

    v[0] = 0; v[1] = 0;

    for (int i = 2; i <= 1000; i++){
        if (v[i]){
            for (int j = i*i; j <= 1000; j += i) v[j] = 0;
        }
    }

    return v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a = pre();

    vector<int> v;

    for (int i = 0; i < 1001; i++){
        if (a[i]) v.pb(i);
    }

    int n, k;
    cin >> n >> k;

    int cnt = 0;

    for (int i = 0; i < (int)v.size() - 1; i++){

        if (v[i] + v[i + 1] + 1 > n) break;
        
        if (a[v[i] + v[i + 1] + 1]) cnt++;

        if (cnt >= k) break;
    }

    if (cnt >= k) cout << "YES\n";

    else cout << "NO\n";

    return 0;
}