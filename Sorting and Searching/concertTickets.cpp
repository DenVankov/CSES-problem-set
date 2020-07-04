#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> t(m);
    ll k;
    multiset<ll, greater<ll>> mset;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        mset.insert(k);
    }
    for (int j = 0; j < m; ++j) {
        cin >> t[j];
    }

    for (auto &j : t) {
        auto idx = mset.lower_bound(j);
        if (idx != mset.end()) {
            cout << *idx << "\n";
            mset.erase(idx);
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}