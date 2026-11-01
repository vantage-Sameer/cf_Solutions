#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> pp;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        pp.pb({b, a});
    }

    sort(pp.begin(), pp.end());

    int end = pp[0].first, ans = 1;

    for (int i = 1; i < n; i++){
        if (pp[i].second >= end){
            ans++;
            end = pp[i].first;
        }
    }

    cout << ans << endl;

    return 0;
}