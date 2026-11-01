#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    char y1 = '0', y2 = '0';

    int val = c - a;
    int cnt1 = abs(val);

    if (val < 0) y1 = 'W';
       
    else if (val > 0) y1 = 'E';
      

    val = d - b;
    int cnt2 = abs(val);

    if (val < 0) y2 = 'S';
     
    else if (val > 0) y2 = 'N';
       

    int i = 0;

    while (i < t && (cnt1 || cnt2)){
        char c = s[i];

        if (c == y1 && cnt1) cnt1--;

        else if (c == y2 && cnt2) cnt2--;

        i++;
    }

    if (!cnt1 && !cnt2) cout << i << endl;

    else cout << -1 << endl;

    return 0;
}