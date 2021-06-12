#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
	ll n, m;
	cin >> n >> m;
	ll k_max = 0, k_min = 0;
	k_max = ((n - m + 1) * (n - m)) / 2;
	ll B = n / m, r = n % m;
	k_min = (m - r) * (B * (B - 1) / 2) + r * ((B + 1) * B / 2);
	cout << k_min << " " << k_max;
}
