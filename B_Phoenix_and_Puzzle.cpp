#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkperfectsquare(int n){
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n; cin  >> n;
        if (n == 2 or n == 4){
            cout << "YES" << endl;
            continue;
        }
        if (n % 2 == 0 and checkperfectsquare(n / 2)){
            cout << "YES" << endl;
        }else if (n % 4 == 0 and checkperfectsquare(n / 4)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}