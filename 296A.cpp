//

#include <bits/stdc++.h>

using namespace std;

const int inf = INT_MAX;
const int ninf = INT_MIN;
#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
#define pi (2*acos(0.0))
#define eps 1e-7

int n, in;
int ints[100];

bool containsKey(const map<int, int>& mp, int key) {
    if (mp.find(key) != mp.end()) return false; 
    return true;
}

void solve() {
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> in;
        ints[i] = in;
        mp.insert({in, 0});
    }
    for (int i = 0; i < n; i++) {
        mp[ints[n]] += 1;
    }
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
