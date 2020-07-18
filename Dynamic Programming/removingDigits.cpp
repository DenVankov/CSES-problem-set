#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    while (n != 0) {
        set<int, greater<int>> s;
        int tmp = n;
        while (tmp > 0) {
            s.insert(tmp % 10);
            tmp /= 10;
        }
        n -= *s.begin();
        s.clear();
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}