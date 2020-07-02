#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cnt = 0;
int n = 8;

void search(int y, vector<int> &col, vector<int> &diag1, vector<int> &diag2, vector<vector<int>> &board) {
    if (y == n) {
        cnt++;
        return;
    }
    for (int x = 0; x < n; ++x) {
        if (col[x] || diag1[x + y] || diag2[x - y + n - 1] || board[x][y]) continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1, col, diag1, diag2, board);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}


int main() {
    vector<vector<int>> board(8, vector<int> (8, 0));
    char symb;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> symb;
            if (symb == '*') {
                board[i][j] = 1;
            }
        }
    }

    vector<int> col(8 * 8, 0);
    vector<int> diag1(8 * 8, 0);
    vector<int> diag2(8 * 8, 0);

    search(0, col, diag1, diag2, board);
    cout << cnt << "\n";
    return 0;
};