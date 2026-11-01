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

        stack<int> st;

        vector<int> printed(n + 1, 0);

        for (int i = 1; i <= n; i++){
            char c;
            cin >> c;

            if (c == '3') printed[i] = 1;

            else if (c == '1') st.push(i);

            else{
                if (!st.empty()){
                    printed[st.top()] = 1;
                    st.pop();
                }

                else printed[i] = 1;
            }
        }
        int cnt = 0;

        for (int i = 1; i <= n; i++) if (!printed[i]) cnt++;

        cout << cnt << endl;

        for (int i = 1; i <= n; i++) if (!printed[i]) cout << i << " ";

        cout << endl;
    }

    return 0;
}