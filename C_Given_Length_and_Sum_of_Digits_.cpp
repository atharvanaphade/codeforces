#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, s, i, k;
    cin >> m >> s;
    if (s < 1 and m > 1 or s > m * 9){
        cout << "-1 -1";
    }else {
        for (i = m - 1, k = s; i >= 0; i--){
            int j = max (0, k - 9 * i);
            if (j == 0 and i == m - 1 and k){
                j = 1;
            }
            cout << j;
            k -= j;
        }
        cout << " ";
        for (i = m - 1, k = s; i >= 0; i--){
            int j = min (9, k);
            cout << j;
            k -= j;
        }
    }
}