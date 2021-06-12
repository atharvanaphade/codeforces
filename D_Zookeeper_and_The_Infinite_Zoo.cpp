#include <iostream>
#include <bits/stdc++.h>

using namespace std;

inline auto solve(){
    int a, b;
    cin >> a >> b;
    vector<int> v_a, v_b;
    if (a > b){
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < 31; i++){
        if (b & (1 << i)){
            v_b.push_back(i);
        }if (a & (1 << i)){
            v_a.push_back(i);
        }
    }
    if (v_a.size() < v_b.size()){
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < v_b.size(); i++){
        if (v_a[i] > v_b[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }
}