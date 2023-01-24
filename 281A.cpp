// https://codeforces.com/problemset/problem/281/A

// Why did I do this one...

#include <bits/stdc++.h>

using namespace std;

string s;

void solve() {
    cin >> s;
    cout << (char)toupper(s[0]) << s.substr(1, s.size()) << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
