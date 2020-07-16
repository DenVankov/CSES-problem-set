#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<ll> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

//    vector<vector<int>> dp (x + 1, vector<int> (n + 1, 0));
//
//    dp[0][0] = 1;
//
//    for (int j = 0; j <= x; ++j) {
//        for(int i = 1; i <= n; ++i) {
//            if (j - c[i - 1] >= 0) {
//                dp[j][i] += dp[j - c[i - 1]][i];
//            }
//            dp[j][i] += dp[j][i - 1];
//        }
//    }

    sort(c.begin(), c.end());
    vector<ll> dp(x + 1);
    dp[0] = 1;

    for (auto & j : c) {
        for (int i = 1; i <= x; ++i) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
        }
    }

//    for (int k = 0; k < dp[0].size(); ++k) {
//        for (int i = 0; i < dp.size(); ++i) {
//            cout << dp[i][k] << " ";
//        }
//        cout << "\n";
//    }

    //cout << dp[x][n] << "\n";
    cout << dp[x] << "\n";
    return 0;
}