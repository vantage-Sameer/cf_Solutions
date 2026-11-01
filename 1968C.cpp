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
        int n;
        cin >> n;

        vector<int> x(n - 1);

        for (auto &y : x) cin >> y;

        int curr = *(max_element(x.begin(), x.end())) + 1;

        cout << curr << " ";

        for (auto &y : x){
            curr += y;

            cout << curr << " ";
        }

        cout << endl;
    }

    return 0;
}