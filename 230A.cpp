// https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
#define v vector
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
template<typename T1, typename T2>
void contains(T1 s,T2 k){return s.find(k)!=s.end();}
template<typename T>
void logArr(T arr,int n){cout<<"[ ";for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"]"<<nl;}
template<typename T1,typename T2>
void setArr(T1& arr,int n,T2 v){for(int i=0;i<n;i++)arr[i]=v;}

int levels[10001], cache[10001];
void solve() {
    int s, n, x, y;
    cin >> s >> n;
    setArr(cache, n, 0);
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        levels[i] = x;
        cache[x] += y;
    }
    sort(levels, levels+n);
    for(int i = 0; i < n; i++) {
        if(s > levels[i]) {
            s += cache[levels[i]];
            cache[levels[i]] = 0;
        } else {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
