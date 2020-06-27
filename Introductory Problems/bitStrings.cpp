#include <bits/stdc++.h>

using namespace std;

int main() {
    long long module = 1e9 + 7;
    long long n, out = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        out = ( out * 2 ) % module;
    }
    cout << out << "\n";
    return 0;
}