#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    vector<long long> v(n);

    long long odd;
    long long even;
    if (n % 2 == 0) {
        odd = n - 1;
        even = n;
    } else {
        odd = n;
        even = n - 1;
    }

    int j = 0;
    while (odd != -1) {
        v[j] = odd;
        odd -= 2;
        j++;
    }
    for (int i = j; i < n; ++i) {
        v[i] = even;
        even -= 2;
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}