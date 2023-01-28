// https://codeforces.com/problemset/problem/208/A

// Biggest dumpsterfire of a question string parsing in C++ sucks

#include <bits/stdc++.h>

const int inf = INT_MAX;
const int ninf = INT_MIN;
#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
#define pi (2*acos(0.0))
#define eps 1e-7

using namespace std;

string s;

void solve() {
    cin >> s;
    s += "WUB";
    s.insert(0, "WUB");
    size_t pos = 0;
    string token, delimiter = "WUB", out = "";
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        out += token;
        out += " ";
        s.erase(0, pos + delimiter.length());
    }

    while (out[0] == ' ') out.erase(0, 1);
    while (out[out.size() - 1] == ' ') out.pop_back();
    for (int i = 1; i < out.size(); i++) {
        if (out[i] == ' ' && out[i - 1] == ' ') {
            out.erase(i, 1);
        }
    }

    cout << out << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
