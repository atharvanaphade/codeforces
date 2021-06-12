#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, m, k;
        cin >> n >> m >> k;
        if ((n * m) - 1 == k){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}