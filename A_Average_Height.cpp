#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        list<int> ret;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                ret.push_back(a[i]);
            }else if(a[i] % 2 == 1){
                ret.push_front(a[i]);
            }
        }
        for(auto i = ret.begin(); i != ret.end(); i++){
            cout << *i << " ";
        }
        cout << endl;
    }
}