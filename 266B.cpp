// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

int n, t;
string s;

void solve() {
    cin >> n >> t >> s;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                char tmp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = tmp;
                j++;
            }
        }
    }
    cout << s << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
