#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, x;
        cin >> n >> x;
        int s = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            a[i] %= x;
            s += a[i];
            s %= x;
        }
        int ret = n;
        if(s % x == 0){
            int l = 0;
            while(l < n and a[l] == 0){
                ++l;
            }
            int r = 0; 
            while(r < n and a[n - 1 - r] == 0){
                ++r;
            }
            int m = (l < r) ? l : r;
            ret -= m + 1;
        }
        cout << ret << endl;
    }
}