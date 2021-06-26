#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int x = n;
        if (n % 2 != 0) x += 1; 
        vector<int> v(x);
        for (int i = 1; i <= x; i++) {
            if (i % 2 == 0) {
                v[i - 1] = i - 1;
            } else if (i % 2 != 0) {
                v[i - 1] = i + 1;
            }
        }
        if (n % 2 != 0) {
            v.pop_back();
            v[n - 1] = n;
            swap (v[n - 1], v[n - 2]);
        }
        for (auto i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
}