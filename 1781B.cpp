// https://codeforces.com/problemset/problem/1781/B

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
void printArr(T arr,int n){cout<<"[ ";for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"]"<<nl;}

void solve() {
    int n;cin >> n;
    vector<int> cnt(n + 1);
    for (int i = 0; i < n; i++) {
        int person;
        cin >> person;
        cnt[person] += 1;
    }
    int res = 0, sum = 0;
    for (int k = 0; k <= n; k++) {
        if (cnt[k] == 0 && sum == k) {
            res += 1;
        }
        sum += cnt[k];
    }
    cout << res << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin >> t;
    while (t--) solve();
    return 0;
}
