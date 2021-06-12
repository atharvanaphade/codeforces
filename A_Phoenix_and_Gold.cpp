#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n, x, sum = 0;
        cin >> n >> x;
        vector<int> w(n);
        for (int i = 0; i < n; i++){
            cin >> w[i];
            sum += w[i];
        }
        if (sum == x){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++){
            if (x == w[i]){
                swap (w[i], w[i + 1]);
            }
            cout << w[i] << " ";
            x -= w[i];
        }
        cout << endl;
        continue;
    }
}