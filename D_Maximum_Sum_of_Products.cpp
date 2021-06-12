#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++){
        cin >> b[i];
    }
    ll ret = 0, maxi, total;
    for (ll i = 0; i < n; i++){
        ret += a[i] * b[i];
    }
    maxi = ret;
    for (ll i = 0; i < n; i++){
        total = ret;
        ll l = i - 1, r =  i + 1;
        while (l >= 0 and r < n){
            total -= (a[l] * b[l] + a[r] * b[r]);
            total += (a[l] * b[r] + a[r] * b[l]);
            maxi = max (total, maxi);
            l--;r++;
        }
    }
    for (ll i = 0; i < n; i++){
        total = ret;
        ll l = i, r =  i + 1;
        while (l >= 0 and r < n){
            total -= (a[l] * b[l] + a[r] * b[r]);
            total += (a[l] * b[r] + a[r] * b[l]);
            maxi = max (total, maxi);
            l--;r++;
        }
    }
    cout << maxi;
}