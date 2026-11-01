#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll temp = n, count = 0;

    while (temp){
        temp /= 10;
        count++;
    }

    ll t = count - 1, sum = 1;

    while (t--) sum *= 2;

    ll val = sum;

    sum--;

    int bits = count - 1;

    ll p = -1;

    for (int i = 0; i < val; i++){

        ll num = 1;

        for (int j = bits - 1; j >= 0; j--){
            num *= 10;
            if (i & (1 << j)) num++;
        }

        if (num <= n) p = max(p, num);
    }

    if (p != -1){

        ll b = 1;

        for (int i = 0; i < bits; i++) b *= 10;

        ll x = p - b, idx = 0, pw = 1;

        while (x){
            idx += (x%10)*pw;
            pw <<= 1;
            x /= 10;
        }

        sum += idx + 1;
    }

    cout << sum;

    return 0;
}