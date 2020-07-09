#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef pair <ll, ll> line;

struct classComparator {
    bool operator()(const line & lhs, const line & rhs) {
        return lhs.second - lhs.first < rhs.second - rhs.first;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    ll x, in;
    cin >> x >> n;;
    multiset<line, classComparator> s {{0, x}};
    set<ll> lower {0, x};
    set<ll, greater<ll>> upper {x, 0};
    for (int i = 0; i < n; ++i) {
        cin >> in;
        ll right = *lower.upper_bound(in);
        ll left = *upper.upper_bound(in);
        s.erase(s.find({left, right}));
        s.insert({left, in});
        s.insert({in, right});
        lower.insert(in);
        upper.insert(in);
        cout << s.rbegin()->second - s.rbegin()->first << " ";
    }
    cout << "\n";
    return 0;
}