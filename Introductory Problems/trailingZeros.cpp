#include <bits/stdc++.h>

using namespace std;

int fives(long long n) {
    int count = 0;
    while (n > 0) {
        count += n / 5;
        n /= 5;
    }
    return count;
}

int main() {
    long long n;
    cin >> n;
    cout << fives(n) << "\n";
    return 0;
}