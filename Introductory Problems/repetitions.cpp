#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int mx = 0;
    int mlx = 0;
    char cur = s[0];
    if (s.size() == 1) {
        cout << "1\n";
        return 0;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (cur == s[i]) {
            mlx++;
        }
        else {
            mx = max(mx, mlx);
            mlx = 1;
            cur = s[i];
        }
    }
    mx = max(mx, mlx);
    cout << mx << "\n";

    return 0;
}