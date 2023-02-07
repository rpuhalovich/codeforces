// https://codeforces.com/problemset/problem/1768/C

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
const int inf = INT_MAX;
const int ninf = INT_MIN;
template<typename T>
void vsort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T>
void rvsort(vector<T>& v){sort(v.rbegin(),v.rend());}

int n, p[100000], q[10000];
void solve() {
    cin >> n;
    int in;
    for (int i = 0; i < n; i++) {
        cin >> in;
        p[i] = in;
        q[n - i - 1] = in;
    }

    bool same = true;
    for (int i = 0; i < n; i++) {
        if (p[i] != q[i]) same = false;
    }
    if (same) {
        cout << "NO" << nl;
    }

    for (int i = 0; i < n; i++) cout << p[i] << " ";
    cout << nl;
    for (int i = 0; i < n; i++) cout << q[i] << " ";
    cout << nl;
    cout << "YES" << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
