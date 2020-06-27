#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> numbs(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbs[i];
    }

    bool done = false;
    long long cnt = 0;
    while (!done) {
        done = true;
        long long cur = numbs[0];
        for (int j = 1; j < n; ++j) {
            if (cur > numbs[j]) {
                done = false;
                cnt += cur - numbs[j];
                numbs[j] += cur - numbs[j];
            }
            cur = numbs[j];
        }
    }
    cout << cnt << "\n";

    return 0;
}