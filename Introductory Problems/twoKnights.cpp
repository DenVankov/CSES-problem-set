#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll compute(ll k) {
    return (k * k * (k * k - 1) - 8 - 24 - (k - 4) * 16  - 16 - (k - 4) * 24 - 8 * (k - 4) * (k - 4)) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    for (ll k = 1; k <= n; ++k) {
        cout << compute(k) << "\n";
    }
    return 0;
}