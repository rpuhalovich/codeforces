// https://codeforces.com/problemset/problem/276/B

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

string str;
map<int, int> memo;
int longest = 0;
bool isPali(string s, int l, int r) {
    while (l < r) {
        if (s[l]!=s[r]) return false;
        l++;
        r++;
    }
    return true;
}

int dfs(int i, string curstr) {
    if (memo.contains(i)) return memo[i];
    if (i >= str.size()) return 0;

    int curlen = 0;
    if (isPali(curstr, 0, curstr.size() - 1)) curlen = curstr.size();
    curlen = max(curlen, dfs(i + 1, curstr + str[i]));
    curlen = max(curlen, dfs(i + 1, curstr));
    memo.insert({i, curlen});
    return curlen;
}

void solve() {
    cin >> str;
    int res = dfs(0, "");
    cout << res << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
