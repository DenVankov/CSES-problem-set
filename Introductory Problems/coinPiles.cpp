#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    long long a, b;
//    unsigned int start_time =  clock();
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        if ((2 * a - b) % 3 == 0 && (2 * b - a) % 3 == 0 && (2 * a - b ) >= 0 && (2 * b - a) >= 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
//    unsigned int end_time = clock();
//    cout << (end_time - start_time) / 1000;

    return 0;

}