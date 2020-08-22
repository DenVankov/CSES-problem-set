#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> x(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    ll cnt = 0;

    vector<vector<int>> s(n, vector<int> (m + 1, 0));

    for (int j = 1; j <= m; j++) {
        if (x[0] && j == x[0] || !x[0])
            s[0][j] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if (x[i] && j == x[i] || !x[i]) {
                for (int k = max(0, j - 1); k <= min(m, j + 1); k++) {
                    (s[i][j] += s[i - 1][k]) %= MOD;
                }
            }
        }
    }
    for (int i = 1; i <= m; i++) {
        (cnt += s[n - 1][i]) %= MOD;
    }

    cout << cnt << "\n";

    return 0;
}