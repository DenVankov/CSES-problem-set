#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll in, cnt = 0, mx = 0;

    queue<ll> q;
    set<ll> s;
    for (int j = 0; j < n; ++j) {
        cin >> in;
        if (s.find(in) == s.end()) {
            q.push(in);
            s.insert(in);
            cnt++;
            mx = max(cnt, mx);
        } else {
            while (q.front() != in) {
                s.erase(q.front());
                q.pop();
                cnt--;
            }
            s.erase(q.front());
            q.pop();
            cnt--;
            s.insert(in);
            q.push(in);
            cnt++;
        }
    }

    cout << mx << "\n";

    return 0;
}