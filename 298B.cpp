// https://codeforces.com/problemset/problem/298/B

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
bool isPali(string s,int l,int r){while(l<r)if(s[l++]!=s[r--])return false;return true;}

int t, sx, sy, ex, ey;
string dirs;
int closer(int e, int s1, int s2) {
    return abs(e-s1)>abs(e-s2)?s2:s1;
}
void solve() {
    cin>>t>>sx>>sy>>ex>>ey;
    cin>>dirs;

    int time=0;
    for(int i=0;i<t;i++) {
        if(dirs[i]=='N')sy = closer(ey, sy, sy+1);
        if(dirs[i]=='S')sy = closer(ey, sy, sy-1);
        if(dirs[i]=='E')sx = closer(ex, sx, sx+1);
        if(dirs[i]=='W')sx = closer(ex, sx, sx-1);
        time++;
        if(sx==ex&&sy==ey) {
            cout<<time<<nl;
            return;
        }
    }

    cout<<-1<<nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
