// https://codeforces.com/problemset/problem/222/A

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

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v){cout<<"[ ";for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}return cout<<"]";}
template<typename T> void sort(vector<T>& v){sort(v.begin(),v.end());}
template<typename T> void rsort(vector<T>& v){sort(v.rbegin(),v.rend());}
template<typename T1,typename T2> void seta(T1& a,int n,T2 v){for(int i=0;i<n;i++)a[i]=v;}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums[i] = num;
    }

    int cur = nums[k - 1], idx = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] != cur) {
            if (i > k - 1) {
                cout << -1 << nl;
                return;
            } else {
                idx = i;
                break;
            }
        }
    }

    cout << idx + 1 << nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++) solve();
    return 0;
}
