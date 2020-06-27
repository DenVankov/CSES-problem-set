#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n != 1)
        cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        if (n != 1)
            cout << n << " ";
    }
    cout << n << "\n";
    return 0;
}
