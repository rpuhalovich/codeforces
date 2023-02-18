// https://codeforces.com/problemset/problem/43/B

#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f first
#define s second
const int inf = INT_MAX;
const int ninf = INT_MIN;

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){cout<<"[ ";for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}return cout<<"]";}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}

void solve() {
    string s1, s2;
    umap<char, int> charcounts;
    getline(cin, s1);
    getline(cin, s2);

    for (char c:s1) {
        if (c == ' ') continue;
        charcounts.insert({c, 0});
    }

    for (char c:s1) {
        if (c == ' ') continue;
        charcounts[c]++;
    }

    for (char c:s2) {
        if (c == ' ') continue;
        if (charcounts[c] <= 0 || !charcounts.contains(c)) {
            cout << "NO" << nl;
            return;
        }
        charcounts[c]--;
    }

    cout << "YES" << nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
