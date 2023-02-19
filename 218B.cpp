// https://codeforces.com/problemset/problem/218/B

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

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){
    cout<<"[ ";for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}return cout<<"]";
}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}

void solve() {
    int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>> mxh;
    priority_queue<int, vector<int>, greater<int>> mnh;
    for (int i = 0; i < m; i++) {
        int in;
        cin >> in;
        mxh.push(in);
        mnh.push(in);
    }

    int mxprofit = 0;
    for (int i = 0; i < n; i++) {
        int p = mxh.top();
        mxh.pop();
        mxprofit += p;
        if (p - 1 > 0) mxh.push(p - 1);
    }
    cout << mxprofit << " ";

    int mnprofit = 0;
    for (int i = 0; i < n; i++) {
        int p = mnh.top();
        mnh.pop();
        mnprofit += p;
        if (p - 1 > 0) mnh.push(p - 1);
    }
    cout << mnprofit;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
