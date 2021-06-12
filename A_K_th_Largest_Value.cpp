#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
    fast
    int n, q, count_one = 0;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (v[i] == 1){
            count_one++;
        }
    }
    for (int i = 0; i < q; i++){
        int q_type, x;
        cin >> q_type >> x;
        if (q_type == 1){
            if (v[x - 1] == 1){
                count_one--;
            }else if (v[x - 1] == 0){
                count_one++;
            }
            v[x - 1] = 1 - v[x - 1];
        }else if (q_type == 2){
            if (x > count_one){
                cout << 0 << endl;
            }else {
                cout << 1 << endl;
            }
        }
    }
}