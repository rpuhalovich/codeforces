// https://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>

#define inf INT_MAX
#define ninf INT_MIN
#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set

using namespace std;

int n, k;
int fences[150000];

void solve() {
    cin >> n >> k;

    int in;
    for (int i = 0; i < n; i++) {
        cin >> in;
        fences[i] = in;
    }

    int minidx = 0, curmin = 0;
    for (int i = 0; i < k; i++) {
        curmin += fences[i];
    }

    int cursum = curmin;
    for (int i = 0, j = k; j <= n; i++, j++) {
        if (cursum < curmin) {
            curmin = cursum;
            minidx = i;
        }

        cursum -= fences[i];
        cursum += j < n ? fences[j] : 0;
    }

    cout << minidx + 1 << nl;
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
