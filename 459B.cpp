// https://codeforces.com/problemset/problem/459/B

#include <bits/stdc++.h>

const int inf = INT_MAX;
const int ninf = INT_MIN;
#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set

using namespace std;

ll n, in;

void solve() {
    cin >> n;

    ll mincnt = 0, maxcnt = 0, curmin = inf, curmax = ninf;
    for (int i = 0; i < n; i++) {
        cin >> in;

        if (in < curmin) {
            curmin = in;
            mincnt = 0;
        }
        if (in > curmax) {
            curmax = in;
           maxcnt = 0;
        }

        if (in == curmin) mincnt++;
        if (in == curmax) maxcnt++;
    }

    // cout << maxcnt << " " << mincnt << nl;
    // cout << curmax << " " << curmin << nl;
    // n*(n-1)/2 <- formula for the number of pairs a set of size n can make
    // kinda lame that the solution requires a specific mathematical fact
    cout << curmax - curmin << " " << (curmax != curmin ? maxcnt * mincnt : n*(n-1)/2) << nl;
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
