// https://codeforces.com/gym/348180/problem/A

#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

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


/**
 * This uses the divisor transitive property (a | b, b | c therefore a | c)?
 * 
 * 2 is the smallest possible c that would divide both a and b.
 * Imagine a=8 and b=6, smallest divisor is 2 but 8 | 6 isn't an integer.
 */
void solve() {
    int n;
    cin >> n;
    cout << n / 2 << nl;
}

int main() {
#ifdef LOCAL
    auto begin = high_resolution_clock::now();
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1, i = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) {
        // cout << "Case #" << i << ": "; i++;
        solve();
    }

#ifdef LOCAL
    auto end = high_resolution_clock::now();
    cout << setprecision(4) << fixed;
    // cout << "Execution time: " << duration_cast<duration<double>>(end - begin).count() << " seconds" << nl;
#endif

    return 0;
}
