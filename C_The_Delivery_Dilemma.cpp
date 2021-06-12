#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int mt = 0;
        for(int i = 0; i < n; i++){
            mt = max(mt, a[i]);
            mt = max(mt, b[i]);
        }
        int start = 1, end = mt;
        while(start < end){
            int mid = (start + end) / 2;
            long long t = 0;
            for(int i = 0; i < n; i++){
                if(a[i] > mid){
                    t += b[i];
                }
            }
            if(t <= mid){
                end = mid;
            }else{
                start = mid + 1;
            }
        }
        cout << start << endl;
    }
}