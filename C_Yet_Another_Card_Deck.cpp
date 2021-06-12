#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> a(n), t(q);
	for (auto &x : a){
		cin >> x;
	}
	for (auto &y : t){
		cin >> y;
	}
	for (int i = 0 ; i < q; i++){
		int p = find(a.begin(), a.end(), t[i]) - a.begin();
		cout << p + 1 << " ";
		rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
	}
}
