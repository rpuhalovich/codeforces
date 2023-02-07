// https://atcoder.jp/contests/practice2/tasks/practice2_a

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
#ifdef LOCAL
#define LOGARR(arr, n) logArr(arr, n)
#else
#define LOGARR(arr, n)
#endif
const int inf = INT_MAX;
const int ninf = INT_MIN;
template<typename T>
void vsort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T>
void rvsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T>
void logArr(T& arr,int n){cout<<"[ ";for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"]"<<nl;}
template<typename T1,typename T2>
void setArr(T1& arr,int n,T2 v){for(int i=0;i<n;i++)arr[i]=v;}

int n, q, parents[200001], ranks[200001];

int findParent(int x) {
    if(parents[x]==x) return x;
    return findParent(parents[x]);
}

void unionParents(int u, int v) {
    parents[findParent(u)] = findParent(v);
}

void solve() {
    cin >> n >> q;
    for(int i=0;i<=n;i++) {
        parents[i]=i;
        ranks[i]=1;
    }

    int t, u, v;
    while(q--) {
        cin >> t >> u >> v;
        if(t) {
            cout << (findParent(u)==findParent(v)) << nl;
        } else {
            unionParents(u, v);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
