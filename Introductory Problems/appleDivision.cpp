#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll subset;
ll mn = 2e10;

ll search(int k, int n, vector<ll> &p, ll all) {
    if (k == n + 1) {
        mn = min(mn, abs(2 * subset - all));

    } else {
        subset += p[k - 1];
        search(k + 1, n, p, all);
        subset -= p[k - 1];
        search(k + 1, n, p, all);
    }
    return mn;
}

int main() {
    int n;
    cin >> n;
    vector<ll> p(n);
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        sum += p[i];
    }
    mn = search(1, n, p, sum);
    cout << mn << "\n";

    return 0;
}