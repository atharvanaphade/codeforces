#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

typedef vector<int> VI;


int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll n, m;
        cin >> n >> m;
        VI k(n + 1);
        VI c(m + 1);
        for (int i = 1; i <= n; i++)
            cin >> k[i];
        for (int i = 1; i <= m; i++)
            cin >> c[i];
        ll iter = 1;
        sort(k.begin() + 1, k.end());
        reverse(k.begin() + 1, k.end());
        ll res = 0;
        for (int i = 1; i <= n; i++) {
            if (iter <= k[i] && iter <= m)
                res += c[iter++];
            else
                res += c[k[i]];
        }
        cout << res << endl; 
    }
}