#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> out(n);
    vector<pair<ll, ll>> tuple(n);
    set<ll, greater<ll>> s;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        tuple[i].first = v[i];
        tuple[i].second = i;
    }

    sort(tuple.begin(), tuple.end());

    for (int i = 0; i < n; ++i) {
        pair<ll, ll> tmp = tuple[i];
        ll needed = tmp.second;
        while (true) {
            auto it = s.upper_bound(needed);
            if (it == s.end()) {
                out[tmp.second] = -1;
            } else {
                if (v[*it] == tmp.first) {
                    needed = *it;
                    continue;
                } else {
                    out[tmp.second] = *it;
                }
            }
            break;
        }
        s.insert(tmp.second);
    }

    for (auto & j : out) {
        cout << j + 1 << " ";
    }
    cout << "\n";

    return 0;
}