#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, x, cnt = 0;
    cin >> n >> x;
    vector<int> p(n);
    map<int, int> weight;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        if (!weight.find(p[i])->first) {
            weight.insert(make_pair(p[i], 1));
        } else
            weight[p[i]]++;
    }

    sort(p.begin(), p.end());

    ll i = 0, j = n - 1;

    while (i <= j) {
        if (p[i] + p[j] > x)
            j--;
        else {
            i++;
            j--;
        }
        cnt++;
    }

    cout << cnt << "\n";
    return 0;
}