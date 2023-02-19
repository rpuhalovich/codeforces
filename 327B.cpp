// https://codeforces.com/problemset/problem/327/B

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

bool prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++) {
        if (n%x == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int cur = 3;
    for (int i = 0; i < n; i++) {
        while(!prime(cur)) {
            cur++;
        }
        cout << cur << " ";
        cur++;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
