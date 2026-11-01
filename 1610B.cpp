#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

bool ispd(vector<int>& a, int x){
    int l = 0, r = (int)a.size() - 1;

    while (l < r) {
        while (l < r && a[l] == x) l++;
        while (l < r && a[r] == x) r--;

        if (l < r && a[l] != a[r]) return false;

        l++;
        r--;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (auto &x : arr) cin >> x;

        int l = 0, r = n - 1;

        while (l < r && arr[l] == arr[r]){
            l++; r--;
        }

        if (l >= r){
            cout << "YES" << endl;
            continue;
        }

        if (ispd(arr, arr[l]) || ispd(arr, arr[r])) cout << "YES" << endl;

        else cout << "NO" << endl;
    }

    return 0;
}