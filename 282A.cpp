// https://codeforces.com/problemset/problem/282/A

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

int n;
string in;
void solve() {
    cin >> n;
    int x = 0;
    while (n--) {
        cin >> in;
        for (char c : in) {
            if (c == '-') {
                x--;
                break;
            }
            if (c == '+') {
                x++;
                break;
            }
        }
    }
    cout << x << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
