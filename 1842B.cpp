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
        int n, tar;
        cin >> n >> tar;

        vector<int> a(n), b(n), c(n);

        for (auto &x : a) cin >> x;

        for (auto &x : b) cin >> x;

        for (auto &x : c) cin >> x;

        if (tar == 0){
            cout << "YES\n";
            continue;
        }

        int ans = 0;

        bool flag = false;

        for (auto &x : a){
            if ((x | tar) != tar) break;

            ans |= x;

            if (ans == tar){
                flag = true;
                break;
            }
        }

        if (flag){
            cout << "YES\n";
            continue;
        }

        for (auto &x : b){
            if ((x | tar) != tar) break;

            ans |= x;

            if (ans == tar){
                flag = true;
                break;
            }
        }

        if (flag){
            cout << "YES\n";
            continue;
        }

        for (auto &x : c){
            if ((x | tar) != tar) break;

            ans |= x;

            if (ans == tar){
                flag = true;
                break;
            }
        }

        if (flag){
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }

    return 0;
}