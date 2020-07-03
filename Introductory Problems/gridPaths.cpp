#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int size = 48;

vector<char> line(size + 1);
bool v[7][7]{false};
ll paths = 0;
ll steps = 0;

void finder(ll r, ll c) {
    if (r == 6 && c == 0) {
        if (steps == 48) {
            paths++;
        }
        return;
    }

    if (v[r][c])
        return;

    if ((c > 0 && c < 6 && !v[r][c + 1] && !v[r][c - 1] && ((r == 0 && v[r + 1][c]) || (r == 6 && v[r - 1][c]))) ||
        (r > 0 && r < 6 && !v[r + 1][c] && !v[r - 1][c] && ((c == 0 && v[r][c + 1]) || (c == 6 && v[r][c - 1]))) ||
        (c > 0 && c < 6 && r > 0 && r < 6 && v[r - 1][c] && v[r + 1][c] && !v[r][c - 1] && !v[r][c + 1])         ||
        (c > 0 && c < 6 && r > 0 && r < 6 && v[r][c - 1] && v[r][c + 1] && !v[r + 1][c] && !v[r - 1][c]))
        return;

    v[r][c] = true;

    if (line[steps] != '?') {
        if (line[steps] == 'R') {
            if (c < 6 && !v[r][c + 1]) {
                steps++;
                finder(r, c + 1);
                steps--;
            }
        }
        if (line[steps] == 'L') {
            if (c > 0 && !v[r][c - 1]) {
                steps++;
                finder(r, c - 1);
                steps--;
            }
        }
        if (line[steps] == 'U') {
            if (r > 0 && !v[r - 1][c]) {
                steps++;
                finder(r - 1, c);
                steps--;
            }
        }
        if (line[steps] == 'D') {
            if (r < 6 && !v[r + 1][c]) {
                steps++;
                finder(r + 1, c);
                steps--;
            }
        }
        v[r][c] = false;
        return;
    }

    if (r > 0 && !v[r - 1][c]) {
        steps++;
        finder(r - 1, c);
        steps--;
    }
    if (r < 6 && !v[r + 1][c]) {
        steps++;
        finder(r + 1, c);
        steps--;
    }
    if (c > 0 && !v[r][c - 1]) {
        steps++;
        finder(r, c - 1);
        steps--;
    }
    if (c < 6 && !v[r][c + 1]) {
        steps++;
        finder(r, c + 1);
        steps--;
    }
    v[r][c] = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //auto start = chrono::steady_clock::now();

    for (int i = 0; i < size; ++i) {
        cin >> line[i];
    }

    finder(0, 0);
    cout << paths << "\n";
    //auto end = chrono::steady_clock::now();
    //cout << "\nElapsed time: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms\n";

    //cout << steps << "\n";
    return 0;
}