#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    for (int i = 0; i < tc; i++){
        int n; cin >> n;
        int a, b = 0, c = 0;
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                a = i;
                break;
            }
        }
        for (int i = a + 1; i < n; i++){
            if (n % (a * i) == 0){
                b = i;
                break;
            }
        }
        if (b != 0){
            // int l = b + 1, r = n;
            // while (l <= r){
            //     int mid = l + (r - l) / 2;
            //     if ((mid * a * b) < n){
            //         r = mid;
            //     }if ((mid * a * b) > n){
            //         l = mid + 1;
            //     }if ((mid * a * b) == n){
            //         c = mid;
            //         break;
            //     }
            // }
            // cout << c << endl;
            for (int i = b + 1; i < n; i++){
                if ((i * a * b) == n){
                    c = i;
                    break;
                }
            }
            if (c != 0){
                cout << "YES" << endl;
                printf("%d %d %d\n", a, b, c);
            }else {
                cout << "NO" << endl;
            }
        }else {
            cout << "NO" << endl;
        }
    }
}