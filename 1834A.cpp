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

        vector<int> arr(n);

        int a = 0, b = 0;

        for (auto &x : arr){
            cin >> x;
            
            if (x == 1) a++;

            else b++;
        }

        int count = 0;

        if (b > a){
            while(b > a){
                b--;
                a++;
                count++;
            }
        }

        if (b%2 == 1) count++;

        cout << count << endl;
    }

    return 0;
}