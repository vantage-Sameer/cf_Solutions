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
        int w, h;
        
        cin >> w >> h;

        int k;
        cin >> k;

        vector<int> temp(k);

        ll mx = 0;

        for (auto &x : temp) cin >> x;

        mx = max(mx, (1LL*h)*(*(max_element(temp.begin(), temp.end())) - *(min_element(temp.begin(), temp.end()))));

        int l;
        cin >> l;

        temp.resize(l);

        for (auto &x : temp) cin >> x;

        mx = max(mx, (1LL*h)*(*(max_element(temp.begin(), temp.end())) - *(min_element(temp.begin(), temp.end()))));

        int m;
        cin >> m;

        temp.resize(m);

        for (auto &x : temp) cin >> x;

        mx = max(mx, (1LL*w)*(*(max_element(temp.begin(), temp.end())) - *(min_element(temp.begin(), temp.end()))));

        int n;
        cin >> n;

        temp.resize(n);

        for (auto &x : temp) cin >> x;

        mx = max(mx, (1LL*w)*(*(max_element(temp.begin(), temp.end())) - *(min_element(temp.begin(), temp.end()))));

        cout << mx << endl;
    }

    return 0;
}