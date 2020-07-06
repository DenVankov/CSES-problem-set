#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

pair<int, int> find_min(ll x, vector<ll>& a, int i, int j) {
    ll dif2 = -1, dif3 = -1, dif4 = -1;
    if (j - i > 1) {
        dif2 = abs(x - (a[i + 1] + a[j]));
        dif3 = abs(x - (a[i] + a[j - 1]));
    }
    if (j - i > 2) {
        dif4 = abs(x - (a[i + 1] + a[j - 1]));
    }

    if (j - i > 2) {
        ll mn = min(min(dif2, dif3), dif4);
        if (mn == dif2)
            return {i + 1, j};
        else if (mn == dif3)
            return {i, j - 1};
        else
            return {i + 1, j - 1};
    } else if (j - i == 2) {
        ll mn = min(dif2, dif3);
        if (mn == dif2)
            return {i + 1, j};
        else
            return {i, j - 1};
    }
    return {0, 0};
}

int main() {
    int n;
    cin >> n;
    ll x;
    cin >> x;
    vector<ll> a (n);
    vector<ll> b (n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }


    if (n == 1) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    if (n == 2 && a[0] + a[1] != x) {
        cout << "IMPOSSIBLE\n";
        return 0;
    } else if (n == 2) {
        cout << "1 2\n";
        return 0;
    }

    sort(a.begin(), a.end());

    int i = 0, j = n - 1;
    while (i < j) {
        if (a[i] + a[j] == x) {
            for (int k = 0; k < n; ++k) {
                if (b[k] == a[i]) {
                    cout << k + 1 << " ";
                    continue;
                }
                if (b[k] == a[j])
                    cout << k + 1 << " ";
            }
            cout << "\n";

            return 0;
        }
        pair<int, int> tmp = find_min(x, a, i, j);
        i = tmp.first;
        j = tmp.second;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}