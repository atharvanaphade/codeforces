#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getMinIndex(vector<int> &v){
	int min = v[0];
	int ret = 0;
	for (int i = 0; i < v.size(); i++){
		if (v[i] < min){
			min = v[i];
			ret = i;
		}
	}
	return ret;
}

int main(){
	int tc;
	cin >> tc;
	while (tc--){
		int n, ret = 0, pos = 0;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		for (int i = 1; i < n; i++){
			v[i] += v[i - 1];
		}
		for (int i = 0; i < n; i++){
			pos = i, ret = 1;
			if (v[n - 1] % v[i] != 0) continue;
			for (int j = i; j < n; j++){
				if (v[j] - v[pos] == v[i]){
					pos = j;
					ret++;
				}else if (v[j] - v[pos] > v[i]){
					break;
				}
			}
			if (pos == n - 1){
				cout << n - ret << endl;
				break;
			}
		}	
	}
}
