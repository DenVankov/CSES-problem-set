#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> dp(n + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < 7; ++j) {
            if (i - j >= 0)
                dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }

    cout << dp[n] << "\n";
    return 0;
}