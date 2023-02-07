// https://codeforces.com/problemset/problem/276/B

// Remember to read the question properly - you can rearrange the characters
// therefore dp wasn't necessary.

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
template<typename T>
void logArr(T& a,int n){cout<<"[ ";for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<"]"<<nl;}
template<typename T1,typename T2>
void setArr(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}

int counts[26];
string s;
void solve() {
    cin >> s;
    if(s.size()==1){cout<<"First"<<nl;return;}
    setArr(counts, 26, 0);
    for(auto c:s) {
        counts[c-'a'] += 1;
    }
    int isOdd = 0;
    for(int i:counts) {
        if(i&2!=0) isOdd++;
    }
    if(isOdd==1||isOdd==0){
        cout << "First" << nl;
        return;
    }
    cout << ((isOdd-1)%2==0?"First":"Second")<<nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
