#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b){
    return a.second > b.second;
}



int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]]++;
        }
        int mv = 0, v;
        for(auto it = m.begin(); it != m.end(); it++){
            if(mv < it->second){
                mv = it->second;
                v = it->first;
            }
        }
        int count = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            if(mv < it->second and it->second == mv){
                count++;
            }
        }
        if(count % 2 == 1){
            n = n - (count - 1) * mv;
        }
        cout << max(n % 2, (mv - (n - mv))) << endl;
    }
}