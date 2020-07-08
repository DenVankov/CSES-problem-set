#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    multiset<ll> s;
    ll x;
    cin >> x;
    s.insert(x);
    for (int i = 1; i < n; ++i) {
        cin >> x;
        auto tmp = s.upper_bound(x);
        if (tmp != s.end()) {
            s.erase(tmp);
            s.insert(x);
        } else {
            s.insert(x);
        }
    }

    cout << s.size() << "\n";

    return 0;
}