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

        string s, ans;
        cin >> s;

        bool flag = false;

        for (int i = 0; i < 26; i++){
            string temp = "";
            temp.pb('a' + i);

            if (s.find(temp) == string::npos){
                
                flag = true;
                ans = temp;
                break;
            }
        }

        if (flag){
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < 26; i++){
            for (int j = 0; j < 26; j++){
                string temp = "";

                temp.pb('a' + i);
                temp.pb('a' + j);

                if (s.find(temp) == string::npos){
                    
                    flag = true;
                    ans = temp;
                    break;
                }
            }
            if (flag) break;
        }

        if (flag){
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < 26; i++){
            for (int j = 0; j < 26; j++){
                for (int k = 0; k < 26; k++){
                    string temp = "";

                    temp.pb('a' + i);
                    temp.pb('a' + j);
                    temp.pb('a' + k);

                    if (s.find(temp) == string::npos){
                    
                        flag = true;
                        ans = temp;
                        break;
                    }
                }
                if (flag) break;
            }
            if (flag) break;
        }

        cout << ans << endl;
    }

    return 0;
}