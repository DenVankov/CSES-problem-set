#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> p(n);
    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());
    for (auto & i : p) {
        cnt += abs(i - p[n / 2]);
    }
    cout << cnt << "\n";

    return 0;
}