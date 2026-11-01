#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &x : a) cin >> x;

    string s;
    cin >> s;

    vector<int> ltr(n), rtl(n);

    ltr[0] = rtl[n - 1] = 1;

    for (int i = 1; i < n; i++){
        if (s[i - 1] == '<') ltr[i] = ltr[i - 1] + 1;

        else if (s[i - 1] == '=') ltr[i] = ltr[i - 1];

        else ltr[i] = 1;
    }

    for (int i = n - 2; i >= 0; i--){
        if (s[i] == '>') rtl[i] = rtl[i + 1] + 1;

        else if (s[i] == '=') rtl[i] = rtl[i + 1];

        else rtl[i] = 1;
    }

    vector<int> b(n);

    for (int i = 0; i < n; i++) b[i] = max(ltr[i], rtl[i]);

    ll sum = 0;

    for (int i = 0; i < n; i++) sum += 1LL*a[i]*b[i];

    cout << sum << endl;

    for (auto &x : b) cout << x << " ";

    cout << endl;

    return 0;
}