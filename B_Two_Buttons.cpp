#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int ret = 0;
	while (n < m){
		if (m % 2 == 0){
			m /= 2;
			ret++;
		}else {
			m++;
			ret++;
		}
	}
	cout << n - m + ret;
}
