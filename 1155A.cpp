#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end())) cout << "NO" << endl;

    else{
        for (int i = 0; i < n - 1; i++){
            if (s[i + 1] < s[i]){
                cout << "YES" << endl << i + 1 << " " << i + 2 << endl;
                break;
            }
        }
    }

    return 0;
}