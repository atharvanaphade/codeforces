#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n; string s;
        cin >> n;
        cin >> s;
        int xeros = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '0') xeros++;
        }
        if (xeros == 1){
            cout << "BOB" << endl;
            continue;
        }if (xeros % 2 == 1){
            cout << "ALICE" << endl;
            continue;
        }
        cout << "BOB" << endl;
    }
}