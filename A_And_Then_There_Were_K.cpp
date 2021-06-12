#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n; cin >> n;
        int msb = 0;
        for (int i = 0; i < 30; i++){
            if (((n >> i) & 1) == 1) msb = i;
        }
        cout << (1 << msb) - 1 << endl;
    }
}