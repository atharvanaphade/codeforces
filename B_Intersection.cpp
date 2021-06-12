#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a){
        cin >> i;
    }
    for (auto &i : b){
        cin >> i;
    }
    int max_a = a[0];
    for (auto &i : a){
        if (i > max_a){
            max_a = i;
        }
    }
    int max_b = 0;
    for (auto &i : b){
        if (i > max_b){
            max_a = i;
        }
    }
    cout << abs(max_a - max_b) + 1;
}