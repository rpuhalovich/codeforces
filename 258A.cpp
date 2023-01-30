// https://codeforces.com/problemset/problem/258/A

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

string in;
void solve() {
    cin >> in;
    int removeIdx = in.size() - 1;
    for (int i = 0; i < in.size(); i++) {
        if (in[i] == '0') {
            removeIdx = i;
            break;
        }
    }

    in.erase(removeIdx, 1);
    cout << in << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
