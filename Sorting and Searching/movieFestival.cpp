#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<ll, ll> lhs, pair<ll, ll> rhs) {
    return lhs.second < rhs.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    int cnt = 1, i = 1;
    ll time = v[0].second;
    while (i < n) {
        if (v[i].first <= time) {
            while (v[i].first < time && i < n) {
                i++;
            }
        }
        if (i != n) {
            time = v[i].second;
            cnt++;
            i++;
        }
    }

    cout << cnt << "\n";
    return 0;
}