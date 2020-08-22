#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;
vector<int> tree[200001];
int dp[200001][2];

void solve (int cur, int prev) {
    vector<int> suff, preff;
    dp[cur][0] = 0;
    dp[cur][1] = 0;
    bool isleaf = true;
    for (int i : tree[cur]) {
        if (i != prev) {
            isleaf = false;
            solve(i, cur);
        }
    }

    if (isleaf)
        return;

    for (int i : tree[cur]) {
        if (i != prev) {
            preff.push_back(max(dp[i][0], dp[i][1]));
            suff.push_back(max(dp[i][0], dp[i][1]));
        }
    }

    for (int i = 1; i < (int)preff.size(); ++i) {
        preff[i] += preff[i - 1];
    }
    for (int i = (int)suff.size() - 2; i >= 0; --i) {
        suff[i] += suff[i + 1];
    }

    dp[cur][0] = suff[0];
    int cnt = 0;
    for (int i : tree[cur]) {
        if (i == prev)
            continue;
        int left = (cnt == 0) ? 0 : preff[cnt - 1];
        int right = (cnt == (int)suff.size() - 1) ? 0 : suff[cnt + 1];

        dp[cur][1] = max(dp[cur][1], 1 + left + right + dp[i][0]);
        cnt++;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 2; i < n + 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    solve(1, 0);
    cout << max(dp[1][0], dp[1][1]) << "\n";

    return 0;
}