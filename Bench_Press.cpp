#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, wr, w;
        cin >> n >> w >> wr;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        map<int, int> wieghts;
        for (auto &i : v){
            wieghts[i]++;
        }
        int ret = wr;
        for (auto &i : wieghts){
            if (i.second > 1){
                if (i.second % 2 == 0){
                    ret += (i.second * i.first);
                }else {
                    ret += ((i.second - 1) * i.first);
                }
            }
        }
        if (ret >= w){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}