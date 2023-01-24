// https://codeforces.com/problemset/problem/337/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n, m;
vector<int> v;

void solve() {
    cin >> n >> m;

    int e;
    for (int i = 0; i < m; i++) {
        cin >> e;
        v.push_back(e);
    }

    sort(v.begin(), v.end());

    int res = v[n - 1] - v[0];
    for (int i = n - 1; i < m; i++) {
        res = min(res, v[i] - v[i - n]);
    }

    cout << res << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
