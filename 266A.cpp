// Stones on the Table: https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("266A.in", "r", stdin);
#endif
    int n;
    string s;
    cin >> n;
    cin >> s;

    int count = 0;
    char prev = s.at(0);
    for (int i = 1; i < s.size(); i++) {
        if (s.at(i) != prev) {
            prev = s.at(i);
        } else {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
