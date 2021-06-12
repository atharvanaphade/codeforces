#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        ll n, ans = 0, b = 0; cin >> n;
        map<ll, ll> wieghts;
        for (ll i = 0; i < n; i++){
            ll a; cin >> a;
            if (wieghts[a]){
                b += wieghts[a];
            }else {
                wieghts[a] = 0;
            }
            wieghts[a] += i + 1;
            ans += b;
        }
        cout << ans << endl;
    }
}