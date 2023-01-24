// https://codeforces.com/problemset/problem/337/A

#include <iostream>
#include <vector>
#include <string>

#define ll long long

using namespace std;

ll n, m;
vector<int> v;

void solve() {
    cin >> n >> m;

    ll e;
    for (int i = 0; i < m; i++) {
        cin >> e;
        v.push_back(e);
    }

    sort(v.begin(), v.end());

    ll res = v[n - 1] - v[0];
    for (ll i = n - 1; i < m; i++) {
        ll cur = v[i] - v[i - n];
        if (cur < res) res = cur;
        // res = min(res, v[i] - v[i - n]);
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
