#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		vector<int> d(n), x(n - 1);
		for (int i = 0; i < n; i++) {
			cin >> d[i];
		}
		sort (d.begin(), d.end());
		for (int i = 0; i < n - 1; i++) {
			x[i] = d[i + 1] - d[i];
		}
		int ret = d.back();
		for (int i = 0; i < n - 1; i++) {
			int num = (i + 1) * (n - i + 1);
			int res = x[i] * num;
			ret -= res;
		}
		cout << ret << endl;
	}
}
