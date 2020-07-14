#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    cout << setprecision( 10 );
    int n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    ll max = 1e18 + 1;
    ll min = 0;
    ll out, cur;
    ll end = 0;
    while (min <= max) {
        cur = (max + min) / 2;
        out = 0;
        for (auto &j : v) {
            out += cur / j;
            if (out >= t)
                break;
        }
        if (out < t)
            min = cur + 1;
        if (out >= t) {
            end = cur;
            max = cur - 1;
        }
    }
    cout << end << "\n";
    return 0;
}