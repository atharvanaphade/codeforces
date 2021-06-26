#include <iostream>
#include <bits/stdc++.h>

using namespace std;

inline auto solve () {
    int N, count = 0;
    cin >> N;
    string a, b;
    cin >> a >> b;
    a.push_back('0'); b.push_back('0');
    for (int i = 0; i < N; i++) {
        count += (a[i] == '1') - (a[i] == '0');
        if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) and count != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main () {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}