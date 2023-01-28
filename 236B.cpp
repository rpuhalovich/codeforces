// https://codeforces.com/problemset/problem/236/B

#include <bits/stdc++.h>

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set

using namespace std;

int a, b, c;

void solve() {
    cin >> a >> b >> c;
    int combs[100*100*100];

    for (int i = 1; i <= a*b*c; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) combs[i]++;
        }
    }

    int res = 0;
    for (int i = 0; i <= a*b*c; i++)
        res += combs[i] % 1073741824;

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
