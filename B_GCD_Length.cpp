#include <iostream>	
#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	while (tc--){
		int a, b, c;
		cin >> a >> b >> c;
		cout << 1;
		for (int i = 1; i < a; i++){
			cout << 0;
		}
		cout << " ";
		for (int i = 1; i <= b - c + 1; i++){
			cout << 1;
		}
		for (int i = 1; i < c; i++){
			cout << 0;
		}
		cout << endl;
	}
}

