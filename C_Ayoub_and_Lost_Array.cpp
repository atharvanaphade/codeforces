#include <iostream>
#include <bits/stdc++.h>
#define MOD 1000000007 
#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;
    ll l, r;
    cin >> l >> r;
    ll i, j, k = 0;
    ll arr[3];
    ll p = r - l + 1;
    arr[l % 3] = (p + 2) / 3;
    arr[(l + 1) % 3] = (p + 1) / 3;
    arr[(l + 2) % 3] = (p / 3);
    vector<ll> v(3);
    for(ll i = 0 ; i < 3; i++){
        v[i] = arr[i];
    }
    for(ll t = 1; t < n; t++){
        i = v[0]; j = v[1]; k = v[2];
        v[0] = (i * arr[0] + j * arr[2] + k * arr[1]) % MOD;
        v[1] = (i * arr[1] + j * arr[0] + k * arr[2]) % MOD;
        v[2] = (i * arr[2] + j * arr[1] + k * arr[0]) % MOD;
    }
    cout << v[0] << endl;
}