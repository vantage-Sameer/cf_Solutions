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

        vector<vector<int>> arr(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n - 1; j++) cin >> arr[i][j];
        }

        int l, idx;

        map<int, int> first;

        for (int i = 0; i < n; i++) first[arr[i][0]]++;

        for (auto p : first){
            if (p.second > 1) l = p.first;
        }

        cout << l << " ";

        for (int i = 0; i < n; i++){
            if (arr[i][0] != l){
                for (int j = 0; j < n - 1; j++) cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}