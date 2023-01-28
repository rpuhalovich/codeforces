// https://vjudge.net/problem/LightOJ-1068

#include <bits/stdc++.h>

const int inf = INT_MAX;
const int ninf = INT_MIN;
#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set

using namespace std;

int a, b, k;

void solve() {
    cin >> a >> b >> k;

    int count = 0;
    for (int i = a; i <= b; i++) {
        int sum = 0;
        for (int mult = 1; mult <= 10000; mult *= 10) {
            sum += i / mult % 10;
        }

        if (sum % k == 0 && i % k == 0) {
            count++;
        }
    }

    cout << count << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef LOCAL
    (void)!freopen("test.in", "r", stdin);
#endif
    int t;
    cin >> t;
    int i = 1;
    while (t--) {
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
    return 0;
}
