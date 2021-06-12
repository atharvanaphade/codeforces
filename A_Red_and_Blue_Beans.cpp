#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int r, b, d;
        cin >> r >> b >> d;
        int c = max(r, b) % min(r, b), a;
        if (c == 0){
            a = max(r, b) / min(r, b);
        }else {
            a = max(r, b) / min(r, b) + 1;
        }

        if (a - 1 <= d){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}