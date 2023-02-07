//

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

void solve() {
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
