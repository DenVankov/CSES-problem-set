#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    cin >> input;
    map<char, int> mp;
    for (char & i : input) {
        if (!mp.find(i)->first) {
            mp.insert(make_pair(i, 1));
        } else
            mp[i]++;
    }
    int cnt = 0;
    for (auto& j : mp) {
        if (j.second % 2 == 1)
            cnt++;
    }
    if (cnt > 1) {
        cout << "NO SOLUTION\n";
    } else {
        string out;
        for (auto &j : mp) {
            if (j.second % 2 != 1) {
                for (int i = 0; i < j.second / 2; ++i) {
                    out += j.first;
                }
            }
        }
        for (auto &j: mp) {
            if (j.second % 2 == 1)
                for (int i = 0; i < j.second; ++i) {
                    out += j.first;
                }
        }
        for (auto j = mp.end(); j != mp.begin(); --j) {
            if (j->second % 2 != 1) {
                for (int i = 0; i < j->second / 2; ++i) {
                    out += j->first;
                }
            }
        }
        if (mp.begin()->second % 2 != 1) {
            for (int k = 0; k < mp.begin()->second / 2; ++k) {
                out += mp.begin()->first;
            }
        }
        cout << out << "\n";
    }
    
    return 0;
}