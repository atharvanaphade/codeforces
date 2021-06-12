#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> p(n);
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
        if (p[0] < k and m > 0){
            cout << "YES" << endl;
        }else if (p[0] > k and m > 0 and p[0] == max_element(p.begin(), p.end())){
            cout << "NO" << endl;
        }else {
            cout << "MAYBE" << endl;
        }
    }
}