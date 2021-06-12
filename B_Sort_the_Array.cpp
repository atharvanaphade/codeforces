#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossible (vector<int> &v){
	bool flag = true;
	for (int i = 1; i < v.size() - 2; i++){
		if (v[i] < v[i + 1] and v[i] < v[i - 1]){ 
			flag = false;
			break;
		}
	}
	return flag;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	if (is_sorted(v.begin(), v.end())){
		cout << "yes" << endl << "1 1";
		return 0;
	}
	int l = 0, r = n - 1;
	for (int i = 0; i < n; ++i){
		if (i != 0 and i + 1 != n){
			if (v[i - 1] > v[i] and v[i] < v[i + 1]){
				r = i;
			}else if (v[i - 1] < v[i] and v[i] > v[i + 1]){
				l = i;
			}
		}
	}
	reverse(v.begin() + l, v.begin() + r + 1);
	if (is_sorted(v.begin(), v.end())){
		cout << "yes" << endl << l + 1 << " " << r + 1;
	}else {
		cout << "no";
	}
}
