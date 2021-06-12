#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0 ; i < n; i++){
            cin >> v[i].second;
        }
        for (int i = 0; i < n; i++){
            cin >> v[i].first;
        }
        sort (v.begin(), v.end());
        
    }
}