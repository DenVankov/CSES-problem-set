#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> st(n);
    vector<ll> fn(n);
    for (int i = 0; i < n; ++i) {
        cin >> st[i] >> fn[i];
    }

    int i = 0, j = 0, cnt = 0, mx = 0;
    sort(st.begin(), st.end());
    sort(fn.begin(), fn.end());
    while (i < n && j < n) {
        if (st[i] < fn[j]) {
            cnt++;
            i++;
        } else {
            cnt--;
            j++;
        }
        mx = max(mx, cnt);
    }
    cout << mx << "\n";
    return 0;
}