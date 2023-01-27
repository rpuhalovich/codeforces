//

#include <bits/stdc++.h>

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set

using namespace std;

int n;
string in;
map<int, int> mp;

void solve() {
    cin >> n;
    for (int i = 0; i < 7; i++)
        mp.insert({i+1, 0});
    while (n--) {
        int i;
        cin >> i;
        mp[i] += 1;
    }

    for (auto& i : mp) {
        cout << get<0>(i) << " " << get<1>(i) << nl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
