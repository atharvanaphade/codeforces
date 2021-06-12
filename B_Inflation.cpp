#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (auto &i : p){
            cin >> i;
        }
        long long ret = 0, presum = p[0];
        for (int i = 1; i < n; i++){
            ret = max (ret, ((long long)100 * p[i] - k * presum + k - 1) / k);
            presum += p[i];
        }
        cout << ret << endl;
    }
}