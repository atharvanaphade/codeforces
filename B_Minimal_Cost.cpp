#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

inline auto solve(){
    ll ans = LLONG_MAX, n, u, v;
    ll a[120];
    cin >> n >> u >> v;
    for(int i = 1;i <= n;++i) cin >> a[i];
    for(int i = 1;i <= n - 1;++i) {
        int gap = abs(a[i] - a[i+1]);
        if(gap >= 2) {
            cout << "0\n";
            return;
        } else if(gap == 1) {
            ans = min(ans, min(u, v));
        } else if(gap == 0) {
            ans = min(ans, min(u + v, v + v));
        }
    }
    cout << ans << endl;	
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }
}