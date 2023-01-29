// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

const int inf = INT_MAX;
const int ninf = INT_MIN;
#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
#define pi (2*acos(0.0))
#define eps 1e-7

using namespace std;

int n;
void solve() {
    cin >> n;

    int cur = 0, res = 0, out, in;
    while (n--) {
        cin >> out >> in;
        cur -= out;
        cur += in;
        res = max(res, cur);
    }

    cout << res << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef LOCAL
    (void)!freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
