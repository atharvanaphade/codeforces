#include <iostream>
#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main () {
    int tc; cin >> tc;
    while (tc--) {
        int N, K; cin >> N >> K;
        long long ret = 1;
        for (int i = 0; i < K; i++) ret = (ret * N) % MOD;
        cout << ret << endl;
    }
}