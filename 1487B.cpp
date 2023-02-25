// https://codeforces.com/contest/1487/problem/B

#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

#ifdef LOCAL
#define CLOCK_START auto begin = high_resolution_clock::now();
#define CLOCK_END \
    auto end = high_resolution_clock::now(); \
    cout << setprecision(4) << fixed; \
    cout << "Execution time: " << duration_cast<duration<double>>(end - begin).count() << " seconds" << endl;
#else
#define CLOCK_START
#define CLOCK_END
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

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){
    cout<<"[ ";for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}return cout<<"]";
}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}

void solve() {
    int n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        cout << (1 + ((k - 1) % n)) << endl;
    } else {
        int intersects = (k - 1) / ((n - 1) / 2);
        cout << 1 + (k - 1 + intersects) % n << endl;
    }
}

int main() {
    CLOCK_START;
    IOS;

    int tc = 1, i = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) {
        // cout << "Case #" << i << ": "; i++;
        solve();
    }

    // CLOCK_END;
    return 0;
}
