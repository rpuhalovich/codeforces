// https://codeforces.com/problemset/problem/227/B

#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m;
unordered_map<int, int> mp;

void solve() {
    cin >> n;
    int in;
    for(int i = 0; i < n; i++) {
        cin >> in;
        mp.insert({ in, i + 1 });
    }

    ll front = 0, back = 0;
    int q;
    cin >> m;
    while(m--) {
        cin >> q;
        front += mp[q];
        back += n - mp[q] + 1;
    }

    cout << front << " " << back << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
