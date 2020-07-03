#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, cnt = 1;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());


    for (int i = 1; i < n; ++i) {
        if (x[i - 1] == x[i])
            continue;
        else {
            cnt++;
            while (x[i - 1] == x[i] && i < n) {
                i++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}