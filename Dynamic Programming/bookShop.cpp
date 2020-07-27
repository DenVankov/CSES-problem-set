#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
int n, x;

// Function for find index of obj
//void find(vector<vector<ll>> &dp, vector<pair<int, int>> &books, int k, int j, vector<ll>& target) {
//    if (dp[k][j] == 0)
//        return;
//    if (dp[k - 1][j] == dp[k][j])
//        find(dp, books, k - 1, j, target);
//    else {
//        find(dp, books, k - 1, j - books[k].first, target);
//        target.push_back(k);
//    }
//}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> x;
    vector<int> books(n + 1);
    vector<int> sheets(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> books[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> sheets[i];
    }
    vector<ll> a(x + 1, 0);
//  vector<vector<ll>> dp(n + 1, vector<ll> (x + 1, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = x; j >= 1; --j) {
            if (j - books[i] >= 0)
                a[j] = max(a[j], a[j - books[i]] + sheets[i]);
        }
    }
    cout << a[x] << "\n";

//    for (int k = 1; k <= n; ++k) {
//        for (int j = 1; j <= x; ++j) {
//            if (j - books[k - 1] >= 0)
//                dp[k][j] = max(dp[k - 1][j], dp[k - 1][j - books[k - 1]] + sheets[k - 1]);
//            else
//                dp[k][j] = dp[k - 1][j];
//        }
//    }

//pretty print of dp table
//    for (auto & i : dp) {
//        for (auto & j : i) {
//            cout << j << " ";
//        }
//        cout << "\n";
//    }
//indexes of obj
//    vector<ll> ans;
//    find(dp, books, n, x, ans);
//    for (auto & j : ans) {
//        cout << j + 1 << " ";
//    }
//    cout << dp[n][x] << "\n";

    return 0;
}