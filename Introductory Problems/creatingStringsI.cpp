#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    cin >> input;

    sort(input.begin(), input.end());
    vector<char> permutation;
    set<vector<char>> all;
    for (auto &i : input) {
        permutation.push_back(i);
    }
    do {
        all.insert(permutation);
    } while (next_permutation(permutation.begin(), permutation.end()));

    cout << all.size() << "\n";
    for (auto &i : all) {
        for (auto &j : i) {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}