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
        int n, k;
        cin >> n >> k;

        int ans = n;

		for (int j = 1; j*j <= n; j++){
			if (n%j == 0){
				if (j <= k) ans = min(ans, n/j);

				if (n/j <= k) ans = min(ans, j);
			}
		}

		cout << ans << endl;
    }

    return 0;
}