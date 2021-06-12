#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, x, ret = 0;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++){
        if (a[i] == x and a[i + 1] == x){
            int count = 2, p1 = i - 1, p2 = i + 2;
            if (p1 == -1 or p2 == n){
                ret = max(ret, 2);
            }else {
                while (p1 > 0 and p2 < n){
                    int c = a[p1], e = 1;
                    p1--;
                    while (p1 >= 0 and a[p1] == c){
                        e++;p1--;
                    }while (p2 < n and a[p2] == c){
                        e++;p2++;
                    }
                    if(e >= 3){
                        count += e;
                    } else {
                        break;
                    }
                }
                ret = max(count, ret);
            }
        }
    }
    cout << ret;
}