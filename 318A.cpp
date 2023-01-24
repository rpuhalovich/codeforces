// https://codeforces.com/problemset/problem/318/A

#include <iostream>
#include <string>

#define ll long long
#define log(x) cout << x << endl

using namespace std;

ll n, k;

void solve() {
    cin >> n >> k;

    if (k == 1) {
        cout << 1 << endl;
        return;
    }

    ll mid = n % 2 == 0 ? n / 2 : (n + 1) / 2;

    if (k > mid) {
        k -= mid;
        cout << k * 2 << endl;
    } else {
        k -= 1;
        cout << k * 2 + 1 << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    solve();
    return 0;
}
