// https://codeforces.com/problemset/problem/296/A

// impossible to have permutation if any of the items is
// more than (n+1)/2 frequent.

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set

const int inf = INT_MAX;
const int ninf = INT_MIN;

template<typename T>
void vsort(vector<T>& v){sort(v.begin(), v.end());}
template<typename T1, typename T2>
bool contains(const T1& c, T2 k){return !(c.find(k)==c.end());}

int n, in;
map<int, int> mp;
void solve() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> in;
        if(contains(mp, in))
            mp[in]++;
        else
            mp.insert({in, 0});
    }
    for (auto& p : mp) {
        if (get<1>(p) >= (n + 1) / 2) {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
