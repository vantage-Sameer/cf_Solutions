#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int limit = (int)3e5;

    vector<int> prime(limit + 1, 1);

    prime[0] = 0;

    prime[1] = 0;

    for (int i = 2; 1LL*i*i <= limit; i++){
        if (prime[i]){
            for (int j = i*i; j <= limit; j += i) prime[j] = 0;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        int arr[2], prev = 1, count = 0;

        for (int i = 2; i <= limit; i++){
            if (prime[i] && (i >= d + prev)){
                arr[count++] = i;
                prev = i;
            }

            if (count == 2) break;
        }

        cout << arr[0]*arr[1] << endl;
    }

    return 0;
}