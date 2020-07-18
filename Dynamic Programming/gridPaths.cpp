#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> v(n, vector<char> (n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j];
        }
    }

    vector<vector<ll>> ans(n, vector<ll> (n, 0));
    if (v[0][0] != '*')
        ans[0][0] = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (v[i][j] != '*') {
                if (i > 0 && v[i - 1][j] != '*') {
                    ans[i][j] += ans[i - 1][j];
                }
                if (j > 0 && v[i][j - 1] != '*') {
                    ans[i][j] += ans[i][j - 1];
                }
                ans[i][j] %= MOD;
            }
        }
    }

    cout << ans[n-1][n-1] << "\n";
    return 0;
}