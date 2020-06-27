#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int cur;
    vector<long long> v;
    for (int i = 0; i < n - 1; ++i) {
        cin >> cur;
        v.push_back(cur);
    }
    sort(v.begin(), v.end());
    cur = 1;
    for (int j = 0; j < v.size(); ++j) {
        if (cur != v[j]) {
            cout << cur << "\n";
            return 0;
        }
        cur++;
    }
    cout << n << '\n';
    return 0;
}