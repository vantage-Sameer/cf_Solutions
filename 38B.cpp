#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    vector<vector<int>> board(9, vector<int>(9));

    int p = s[1] - 48, q = s[0] - 96;

    board[p][q] = -1;

    for (int i = 1; i <= 8; i++) board[i][q] = board[p][i] = -1;

    vector<int> a = {2, -2, 2, -2, 1, 1, -1, -1}, b = {1, 1, -1, -1, 2, -2, 2, -2};

    for (int i = 0; i < 8; i++){
        int x = p + a[i], y = q + b[i];

        if (x >= 1 && x <= 8 && y >= 1 && y <= 8) board[x][y] = -1;
    }

    p = t[1] - 48; q = t[0] - 96;

    board[p][q] = -1;

    for (int i = 0; i < 8; i++){
        int x = p + a[i], y = q + b[i];

        if (x >= 1 && x <= 8 && y >= 1 && y <= 8) board[x][y] = -1;
    }

    int cnt = 0;

    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++) cnt += (board[i][j] != -1);
    }

    cout << cnt << endl;

    return 0;
}