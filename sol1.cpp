#include <iostream>
#include <bits/sytdc++.h>

int mat[1003][1003];

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int i, j, k;
    cin >> i >> j >> k;
    for (int i = 0; i < v.size(); i++){
        for (auto i : words[i]){
            mat[i][i - 'a'];
        }
    }
    int sum = 0;
    for (int i = 0; i < 26; i++){
        for (int p = i - 1; p <= j - 1; p++){
            sum += mat[j][i];
        }
        if (sum >= k){
            cout << 'a' + i << endl;
        }
    }
    cout << 'z' << endl;
}


