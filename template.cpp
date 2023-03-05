#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

#ifdef LOCAL
#define TIMER_START auto begin = high_resolution_clock::now();
#define TIMER_END \
auto end = high_resolution_clock::now(); \
cout << setprecision(4) << fixed; \
cout << "Execution time: " << duration_cast<duration<double>>(end - begin).count() << " seconds" << endl;
#else
#define TIMER_START
#define TIMER_END
#endif
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
#define map unordered_map
#define set unordered_set
#define f first
#define s second
const int inf = INT_MAX;
const int ninf = INT_MIN;

void usaco(string filename) {
#ifdef LOCAL
    freopen(("usacoio/" + filename + ".in").c_str(), "r", stdin);
    freopen(("usacoio/" + filename + ".out").c_str(), "w", stdout);
#else
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
#endif
}

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){
    cout<<"[ ";for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}return cout<<"]";
}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}
template<typename T> T max(vector<T> v){T mx=ninf;for(auto i:v)mx=max(mx,i);return mx;}

void solve() {
}

int main() {
    TIMER_START;
    IOS;

    // usaco("test.in");

    int tc = 1, i = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) {
        // cout << "Case #" << i << ": "; i++;
        solve();
    }

    // TIMER_END;
    return 0;
}
