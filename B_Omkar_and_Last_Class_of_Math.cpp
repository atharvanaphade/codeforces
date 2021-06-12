#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++){
        int n; cin >> n;
        if (n % 2 == 0){
            cout << n / 2 << " " << n / 2 << endl;
        }else {
            int l = 0;
            for (int i = 2; i < 1000000; i++){
                if (n % i == 0){
                    l = i;
                    break;
                }
            }if (l == 0){
                l = n;
            }
            cout <<  n / l << " " << n - (n / l) << endl;
        }

    }
}