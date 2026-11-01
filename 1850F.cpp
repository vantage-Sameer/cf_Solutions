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

        vector<int> freq(n + 1, 0), cd(n + 1, 0);

        for (int i = 0; i < n; i++){

            int x;
            cin >> x;

            if (x <= n) freq[x]++;
        }

        for (int i = 1; i <= n; i++){
            if (freq[i] == 0) continue;

            for (int j = i; j <= n; j += i) cd[j] += freq[i];
        }

        cout << *max_element(cd.begin(), cd.end()) << '\n';
    }

    return 0;
}