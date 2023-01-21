// Boy or Girl: https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif

    unordered_set<char> us;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        us.insert(s.at(i));
    }

    if (us.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
