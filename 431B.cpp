// https://codeforces.com/problemset/problem/431/B

#include <bits/stdc++.h>

using namespace std;

#define f0r(a, b) for (long long a = 0; a < (b); ++a)
#define f1r(a, b, c) for (long long a = (b); a < (c); ++a)
#define f0rd(a, b) for (long long a = (b); a >= 0; --a)
#define f1rd(a, b, c) for (long long a = (b); a >= (c); --a)
#define nl '\n'
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f first
#define s second
const int inf = INT_MAX;
const int ninf = INT_MIN;

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){cout<<"[ ";f0r(i,v.size()){cout<<v[i]<<" ";}return cout<<"]";}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){f0r(i, n)a[i]=v;}

const int NUM_PEOPLE = 5;
vector<vector<int>> pairs(NUM_PEOPLE, vector<int>(NUM_PEOPLE));
vector<int> perm;

const vector<int> people = {0,1,2,3,4};
vector<int> curstack;
uset<int> seen;

int mx = ninf;

int getHappi() {
    int res = 0;

    for (int i = 0; i < curstack.size(); i++) {
        for (int j = i; j + 1 < curstack.size(); j+=2) {
            res += pairs[curstack[j]][curstack[j + 1]] + pairs[curstack[j + 1]][curstack[j]];
        }
    }

    return res;
}

void dfs() {
    if (curstack.size() >= NUM_PEOPLE) {
        mx = max(mx, getHappi());
        return;
    }

    for (int i = 0; i < people.size(); i++) {
        if (!seen.contains(i)) {
            seen.insert(i);
            curstack.push_back(i);

            dfs();

            curstack.pop_back();
            seen.erase(i);
        }
    }
}

void solve() {
    f0r (i, NUM_PEOPLE) {
        cin >> pairs[i][0] >> pairs[i][1] >> pairs[i][2] >> pairs[i][3] >> pairs[i][4];
    }
    dfs();
    cout << mx << nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
