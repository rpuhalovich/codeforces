// https://codeforces.com/problemset/problem/276/B

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl '\n'
#define map unordered_map
#define set unordered_set
#ifdef LOCAL
#define logArr(arr, n) la(arr, n)
#else
#define logArr(arr, n)
#endif
const int inf = INT_MAX;
const int ninf = INT_MIN;
template<typename T>
void vsort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T>
void rvsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T>
void la(T& arr,int n){cout<<"[ ";for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"]"<<nl;}
template<typename T1,typename T2>
void setArr(T1& arr,int n,T2 v){for(int i=0;i<n;i++)arr[i]=v;}
bool isPali(string s,int l,int r){while(l<r)if(s[l++]!=s[r--])return false;return true;}

string str;
int dp[1001][1001];
int dfs(int l, int r) {
    if (l == r) return 1;
    if (l > r) return 0;
}

void solve() {
    cin >> str;
    for(int i=0;i<=str.size();i++)setArr(dp[i],str.size()+1,0);
    int res = dfs(0, str.size()); // Find the longest palindromic subsequence.
    cout << ((str.size()-res)%2==0?"First":"Second") << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
