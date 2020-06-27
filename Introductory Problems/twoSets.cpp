#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        sum += i + 1;
    }

    if (sum % 2 == 1)
        cout << "NO\n";
    else {
        cout << "YES\n";
        vector<long long> s1;
        vector<long long> s2;
        long long half = 0;
        while (half != sum / 2 || n == 1) {
            if (half + n <= sum / 2) {
                half += n;
                s1.push_back(n);
            } else {
                s2.push_back(n);
            }
            n--;
        }
        for (int i = n; i > 0; --i) {
            s2.push_back(i);
        }
        cout << s1.size() << "\n";
        for (int i = 0; i < s1.size(); ++i) {
            cout << s1[i] << " ";
        }

        cout << "\n";

        cout << s2.size() << "\n";
        for (int j = 0; j < s2.size(); ++j) {
            cout << s2[j] << " ";
        }
    }
    return 0;
}