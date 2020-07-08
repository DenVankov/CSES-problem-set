#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> x (n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    ll cur = x[0];
    ll sum = x[0];
    for (int j = 1; j < n; ++j) {
        cur = max(cur + x[j], x[j]);
        sum = max(sum, cur);
    }
    cout << sum << "\n";
    return 0;
}