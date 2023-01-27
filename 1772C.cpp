// https://codeforces.com/problemset/problem/1772/C

#include <bits/stdc++.h>

#define nl '\n'

using namespace std;

int k, n;
int cache[41], out[41];

void buildcache() {
    cache[0] = 1;
    for (int i = 1; i < 41; i++) {
        cache[i] = cache[i - 1] + i;

    }
    for (int i = 0; i < k; i++) cout << cache[i] << nl;
}

void solve() {
    cin >> k >> n;
    int cursum = 1;
    for (int i = 0; i < k; i++) {
        out[i] = cache[i];
    }

    int cur = n;
    for (int j = k - 1; j >= 0; j--) {
        if (out[j] >= n) {
            out[j] = n--;
        }
    }

    for (int i = 0; i < k; i++) {
        cout << out[i] << " ";
    }
    cout << nl;
}

int main() {
#ifdef LOCAL
    (void)!freopen("test.in", "r", stdin);
#endif
    buildcache();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
