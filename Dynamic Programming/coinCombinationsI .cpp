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
    sort(c.begin(), c.end());
    vector<ll> dp(x + 1);
    dp[0] = 1;
    for (int i = 1; i <= x; ++i) {
        for (auto & j : c) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
            else {
                break;
            }
        }
    }
    cout << dp[x] << "\n";

    return 0;
}