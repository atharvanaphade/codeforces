#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int odd_count = 0, even_count = 0, x = 0, y = 0;
    for (int i = 1; i <= n; i++){
        if (v[i] % 2 == 0){
            even_count++;
            x = i;
        }else if (v[i] % 2 != 0){
            odd_count++;
            y = i;
        }
        if ((even_count >= 2 and y != 0) or (odd_count >= 2 and x != 0)){
            int ret = odd_count >= 2 ? x : y;
            cout << ret;
            break;
        }
    }
}