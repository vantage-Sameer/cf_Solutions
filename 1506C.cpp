#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int lcs(string a, string b){
    int ans = 0;

    for (int i = 0; i < (int)a.size(); i++){
        for (int j = 0; j < (int)b.size(); j++){

            int k = 0;

            while (i + k < (int)a.size() && j + k < (int)b.size() && a[i + k] == b[j + k]) k++;

            ans = max(ans, k);
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        cout << (int)a.size() + (int)b.size() - 2*lcs(a, b) << endl;
    }

    return 0;
}