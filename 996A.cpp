// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>

#define log(x) cout << x << endl

using namespace std;

int n, res = 0;
int coins[] = {100, 20, 10, 5, 1};
vector<int> v;

void solve() {
    cin >> n;
    v.push_back(0);

    for (int i = 0; i < 5; i++) {
        int c = coins[i];
        res += n / c;
        n = n - ((n / c) * c);
    }

    cout << res << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
