// https://codeforces.com/problemset/problem/1772/C

#include <bits/stdc++.h>

using namespace std;

int k, n;

void setup(int k, int n) {
    int cache[41];
    for (int i = 0; i < k; i++) {
        cache[i] = (i + 2) - (i + 1);
    }
    for (int i : cache) cout << i << " ";
    cout << endl;
}

void solve() {
    cin >> k >> n;
    setup(k, n);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
