#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll ret, n, m, x, counter = 1;
        cin >> n >> m >> x;
        ll i = ((x - 1) % n) + 1;
        ll j = ceil((double)x / (double)n);
        ret = (i - 1) * m + j;
        cout << ret << endl;
    }
}