// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>

#define log(x) cout << x << endl

using namespace std;

int n, res = 0;
int coins[] = {100, 20, 10, 5, 1};

void solve() {
    cin >> n;

    for (int i = 0; i < 5; i++) {
        int c = coins[i];
        res += n / c;
        n = n - ((n / c) * c);
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
