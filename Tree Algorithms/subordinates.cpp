#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> boss(n, 0);

    for (int i = 1; i < n; ++i) {
        cin >> boss[i];
    }

    vector<ll> ans (n, 0);
    for (int i = n - 1; i > 0; --i) {
        ans[boss[i] - 1] += 1 + ans[i];
    }

    for (auto &j : ans) {
        cout << j << " ";
    }

    cout << "\n";

    return 0;
}