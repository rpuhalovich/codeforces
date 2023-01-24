// https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <string>

using namespace std;

string s;

void solve() {
    cin >> s;
    int cnt = 1;
    char curPlayer = s.at(0);
    for (int i = 1; i < s.size(); i++) {
        if (curPlayer == s[i]) {
            cnt++;
        } else {
            curPlayer = s[i];
            cnt = 1;
        }
        if (cnt >= 7) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
