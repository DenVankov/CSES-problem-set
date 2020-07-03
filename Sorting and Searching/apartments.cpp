#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, m, k, cnt = 0;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int iter_a = 0;
    int iter_b = 0;

    while (iter_a < n && iter_b < m) {
        if (abs(b[iter_b] - a[iter_a]) <= k) {
            iter_b++;
            iter_a++;
            cnt++;
        } else if (b[iter_b] > a[iter_a]) {
            iter_a++;
        } else {
            iter_b++;
        }
    }

    cout << cnt << "\n";
    return 0;
}
