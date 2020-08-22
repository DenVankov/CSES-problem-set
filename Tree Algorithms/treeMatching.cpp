#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<pp> tree(n, {0,0});
    for (int i = 0; i < n; ++i) {
        cin >> tree[i].first >> tree[i].second;
    }

    

    return 0;
}