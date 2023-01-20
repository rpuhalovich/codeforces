// Way Too Long Words: https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("71A.in", "r", stdin);
    #endif
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.size() > 10) {
            cout << s.at(0) << s.size() - 2 << s.at(s.size() - 1) << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
