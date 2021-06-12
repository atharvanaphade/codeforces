#include <iostream>
#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main(){
    int n; cin >> n;
    vector<ll> q(n - 1), ret(n); 
    set<ll> s;
    for (int i = 0; i < n - 1; i++){
        cin >> q[i];
    }
    for (int i = 1; i < n; i++){
        ret[i] = q[i - 1] + ret[i - 1];
    }
    ll mx = 0;
    for (int i = 1; i < n; i++){
        mx = max(mx, ret[i]);
    }
    for (auto i : ret){
        s.insert(i + n - mx);
    }
    if (s.size() != n){ 
        cout << -1;
        return 0;
    }
    for (int i = 1; i < n; i++){
        if (s.count(i) > 1 or s.count(i) == 0){
            cout << -1;
            return 0;
        }
    }
    for (auto i : ret) {
        cout << i + n - mx << " ";
    }
}
