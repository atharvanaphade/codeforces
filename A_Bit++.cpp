#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	int val = 0;
	for (auto &i : v){
		if (i == "X++" or i == "++X"){
			val++;
		}else if (i == "X--" or i == "--X"){
			val--;
		}
	}
	cout << val;
}
