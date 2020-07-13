#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define P pair

bool cmp(P<P<int, int>, int> &lhs, P<P<int, int>, int> &rhs) {
    if (lhs.first.first == rhs.first.first) {
        if (lhs.first.second == rhs.first.second)
            return lhs.second < rhs.second;
        else
            return lhs.first.second > rhs.first.second;
    }
    return lhs.first.first < rhs.first.first;
}

bool ans_cmp (P<int, int> & lhs, P<int, int> & rhs) {
    return lhs.first < rhs.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int idx = 0;
    vector<P<P<int, int>, int>> v(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> v[i].first.first;
        v[i].first.second = 1;
        v[i].second = idx;
        i++;
        cin >> v[i].first.first;
        v[i].first.second = 0;
        v[i].second = idx;
        idx++;
    }

    sort(v.begin(), v.end(), cmp);
    map<int, int> hotel;
    vector<P<int, int>> ans;
    queue<int> free;
    int cur_room = 1;
    ans.emplace_back(v[0].second, cur_room);
    hotel[v[0].second] = cur_room;

    for (int j = 1; j < 2 * n; ++j) {
        if (v[j].first.second == 1) {
            if (free.empty()) {
                cur_room++;
                hotel[v[j].second] = cur_room;
                ans.emplace_back(v[j].second, cur_room);
            } else {
                hotel[v[j].second] = free.front();
                ans.emplace_back(v[j].second, free.front());
                free.pop();
            }
        } else {
            free.push(hotel[v[j].second]);
            hotel.erase(v[j].second);
        }
    }

    sort(ans.begin(), ans.end(), ans_cmp);
    cout << cur_room << "\n";
    for (auto & j : ans) {
        cout << j.second << " ";
    }
    cout << "\n";
    return 0;
}
