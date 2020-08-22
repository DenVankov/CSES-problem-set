#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

ll power(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1)
            res *= a;
        res %= MOD;
        b /= 2;
        a *= a;
        a %= MOD;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cout << 9 / 2;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        cout << power(a, b) << "\n";
    }

    return 0;
}