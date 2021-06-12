#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int64_t tax(int64_t t, int64_t a){
    int64_t k = (100 + t) / 100;
    return int64_t(a * k);
}

int main(){
    int64_t t, N;
    cin >> t >> N;
    int64_t counter = 1;
    while (N > 0){
        if (tax(t, counter) == counter){
            N--;
        }
        if (N == 1){
            cout << counter;
        }
        counter++;
    }
}