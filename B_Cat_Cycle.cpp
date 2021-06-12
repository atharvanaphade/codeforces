#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;
        --k;
        if(n % 2){
            k += k / (n / 2);
        }
        cout << 1 + (k % n) << endl;
    }
}