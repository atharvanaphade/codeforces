#include <iostream>
#include <bits/stdc++.h>

using namespace std;

inline auto solve () {
    int N, K;
    cin >> N >> K;
    int target = N / 2;
    if (N % 2 == 1) {
        cout << "1 " << (int)floor (N / 2) << " " << (int)floor (N / 2);
        cout << endl;
        return;
    }
    if (N % 2 == 0 and N % 4 != 0) {
        cout << (int)(N / 2) - 1 << " " << (int)(N / 2) - 1 << " " << 2;
        cout << endl;
        return;
    }
    if (N % 4 == 0) {
        cout << (int)N / 2 << " " << (int)N / 4 << " " << (int)N / 4;
        cout << endl;
        return;
    }
}

int main () {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}