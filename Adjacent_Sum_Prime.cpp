#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check_prime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return true;
        }
    }
}

int check(vector<int> a){
    for (int i = 0; i < a.size() - 1; i++){
        if (!check_prime(a[i] + a[i + 1])){
            return 0;
        }
    }
    if (!check_prime(a[a.size() - 1] + a[0])){
        return 0; 
    }
    return 1;
}

int main(){
    int a; cin >> a;
    vector<int> n(2 * a);
    for (int i = 1; i <= 2 * a; i++){
        n[i - 1] = i;
    }
    int ans = 0, flag = 1;
    auto i = n.end();
    i--;
    while (flag){
        while (next_permutation(i, n.end())){
            if (check(n)){
                ans++;
            }
        }
        if (i == n.begin() + 1){
            flag = 0;
            break;
        }
        i--;
    }
    cout << ans;
}