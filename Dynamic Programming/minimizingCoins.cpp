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
    vector<int> c(n);
    vector<ll> dp(x + 1);

    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    dp[0] = 0;
    sort(c.begin(), c.end());
    for (int i = 1; i <= x; ++i) {
        dp[i] = INF;
        for (auto & j : c) {
            if (i - j >= 0)
                dp[i] = min(dp[i], dp[i - j] + 1);
            else
                break;
        }
    }

    if (dp[x] == INF)
        cout << "-1\n";
    else
        cout << dp[x] << "\n";

    return 0;
}