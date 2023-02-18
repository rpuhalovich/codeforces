// https://codeforces.com/problemset/problem/433/A

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
    umap<int, int> c = {{100, 0},{200, 0}};

    int n, tot = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        c[in]++;
        tot += in;
    }

    int needed = tot / 2;
    if (needed % 100 != 0) {
        cout << "NO" << nl;
        return;
    }

    int num200 = needed / 200;
    if (num200 > c[200]) {
        needed = needed - c[200] * 200;
    } else {
        needed = needed - num200 * 200;
    }

    if (c[100] >= needed / 100) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
