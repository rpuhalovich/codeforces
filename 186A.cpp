// https://codeforces.com/problemset/problem/186/A

#include <bits/stdc++.h>

#define ll long long
#define nl '\n'

using namespace std;

string s1, s2;
vector<char> diff1, diff2;

void solve() {
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) {
        cout << "NO" << nl;
        return;
    }

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff1.push_back(s1[i]);
            diff2.push_back(s2[i]);
        }
    }

    if (diff1.size() != 2 && diff2.size() != 2) {
        cout << "NO" << nl;
        return;
    }

    if (diff1[0] == diff2[1] && diff1[1] == diff2[0]) {
        cout << "YES" << nl;
        return;
    }

    cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
