// https://codeforces.com/problemset/problem/445/A

#include <bits/stdc++.h>

#define ll long long
#define nl '\n'

using namespace std;

int n, m;
char grid[100][100];
char curchar = 'W';

void solve() {
    cin >> n >> m;
    int rows = n, cols = m;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> grid[r][c];
        }
    }

    for (int r = 0; r<rows; r++) {
        if (m % 2 == 0)
            curchar = curchar == 'W' ? 'B' : 'W';
        for (int c=0; c<cols; c++) {
            if (grid[r][c] == '.') {
                grid[r][c] = curchar;
            }
            curchar = curchar == 'W' ? 'B' : 'W';
        }
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) cout << grid[r][c];
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef LOCAL
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
