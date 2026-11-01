#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    ll sum = 0;

    for (auto &x : arr){
        cin >> x;
        sum += x;
    }

    ll q = sum/n, r = sum%n;

    vector<int> val(n, q);

    int i = n - 1;

    while(r--){
        val[i]++;
        i--;
    }

    sort(arr.begin(), arr.end());

    ll diff = 0;

    for (int i = 0; i < n; i++) diff += llabs(arr[i] - val[i]);
    
    cout << diff/2;

    return 0;
}