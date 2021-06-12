#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort (v.begin(), v.end());
    int ret = -1;
    for (int i = 0; i < n; i++){
        if (ret <= v[i].second){
            ret = v[i].second;
        }else {
            ret = v[i].first;
        }
    }
    cout << ret;
}