#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = (int)s.size();

        int cnt = 1;
        
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]) cnt++;
        }

        set<int> st;

        st.insert(cnt);

        for(int i = 1; i < n-1; i++){

            int temp = 0;

            if(s[i] != s[i-1]) temp--;
            else temp++;

            if(s[i] != s[i+1]) temp--;
            else temp++;

            st.insert(cnt + temp);
        }

        cout << st.size() << endl;
    }

    return 0;
}