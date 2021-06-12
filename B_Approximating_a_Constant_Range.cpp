#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 1, j = 0, l = -1, ret = 1, t = 0;
    while (i < n){
        if (t == 0 && a[i] - a[i - 1] != 0){
            t = a[i] - a[i - 1];
            l = i;
            i++;
        }else if (a[i] - a[i - 1] == t && t != 0){
            ret = max(ret, i - j);
            j = l;
            i = j + 1;
            t = a[i] - a[i - 1];
            if (t != 0){
                l = i;
            }
            i++;
        }else {
            if (a[i] - a[i - 1] != 0){
                t = a[i] - a[i - 1];
            }
            i++;
        }
    }
    if (i == n){
        ret = max(ret, i - j);
    }
    cout << ret;
}