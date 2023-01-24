// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, m;
int arr[1000];

void solve() {
    cin >> n >> m;

    int e;
    for (int i = 0; i < m; i++) {
        cin >> e;
        arr[i] = e;
    }

    sort(arr, arr + m);

    int res = arr[n - 1] - arr[0];
    for (int i = n; i < m; i++) {
        res = min(res, arr[i] - arr[i - n + 1]);

    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif

    solve();
    return 0;
}
