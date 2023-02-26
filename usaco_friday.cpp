/*
ID: reanpuh1
LANG: C++
TASK: friday
*/

#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

void usaco(string filename) {
#ifdef LOCAL
    freopen(("usacoio/" + filename + ".in").c_str(), "r", stdin);
    freopen(("usacoio/" + filename + ".out").c_str(), "w", stdout);
#else
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
#endif
}

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

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){
    cout<<"[ ";for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}return cout<<"]";
}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}

void solve() {
    int thirteenths[7];
    seta(thirteenths, 7, 0);
    int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int n; cin >> n;
    int curDayOfWeek = 2, curDayOfMonth = 0, curMonth = 0;
    for (int y = 1900; y < 1900 + n;) {
        if (curDayOfMonth == 12) {
            thirteenths[curDayOfWeek]++;
        }

        int daysThisMonth = monthdays[curMonth];
        if (curMonth == 1 && ((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))) {
            daysThisMonth = 29;
        }

        curDayOfWeek = (curDayOfWeek + 1) % 7;
        curDayOfMonth++;

        if (curDayOfMonth >= daysThisMonth) {
            curMonth = curMonth + 1;
            curDayOfMonth = 0;
        }

        if (curMonth >= 12) {
            curMonth = 0;
            y++;
        }
    }

    for (int i = 0; i < 7; i++) {
        cout << thirteenths[i];
        if (i != 6) cout << " ";
    }
    cout << endl;
}

int main() {
    TIMER_START;
    IOS;

    usaco("friday");

    int tc = 1, i = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) {
        // cout << "Case #" << i << ": "; i++;
        solve();
    }

    // TIMER_END;
    return 0;
}
