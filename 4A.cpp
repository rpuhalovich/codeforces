// Watermelon: https://codeforces.com/problemset/problem/4/A

#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif

    int n;
    cin >> n;

    if (n % 2 == 0 && n > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
