#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc; cin >> tc;
	while (tc--){
		int max_i=0, last=0;
		int n, k; cin >> n >> k;
		last=k;
		for (int i = 2; i <= n; i++){
			int l; cin >> l;
			last=max (l, last);
			max_i=max (max_i, last-l);
		}
		if (max_i==0){
			cout << 0 << endl;
			continue;
		}
		cout << floor (log (max_i) / log (2)) + 1 << endl;
	}
}

