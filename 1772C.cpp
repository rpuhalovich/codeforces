// https://codeforces.com/problemset/problem/1772/C

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int k, n;

int characteristic(const vector<int>& arr) {
    unordered_set<int> st;
    vector<int> resarr;

    for (int i = 1; i < arr.size(); i++) {
        int val = arr[i] - arr[i - 1];
        resarr.push_back(val);
        st.insert(val);
    }

    return st.size();
}

void solve() {
    cin >> k >> n;
    cout << k << " " << n << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
