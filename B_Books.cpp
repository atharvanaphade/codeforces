#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	vector<int> v(n);
	for (int i = 0 ; i < n; i++){
		cin >> v[i];
	}
	int ret = 0, sum = 0;
	for (int i = 0, j = 0; j < n; j++){
		sum += v[j];
		if (sum <= t){
			ret = max (ret, j - i + 1);
		}else {
			sum -= v[i++];
		}
	}
	cout << ret;
}

