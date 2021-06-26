#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc; 
    while(tc--){
        int n, ret = 0; cin>>n;
        vector<int> a(n), prev(2 * n + 1);
        for(int i = 0;i <= 2 * n; i++) prev[i] = 1e6;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            prev[a[i]] = i + 1;
        }
        for (int i = 3; i < 2 * n; i++){
            for (int j = 1; j <= sqrt(i); j++){
                if(i % j == 0 and i != j * j){
                    if(prev[j] + prev[i / j] == i){
                        ret++;
                    }
                }
            }
        }
        cout << ret << endl;
    }
}