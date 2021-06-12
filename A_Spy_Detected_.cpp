#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, size = 0, ret = -1, num = 0;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			size = max(size, a[i]);
		}
		vector<int> track(size + 1, 0);
		for (int i = 0; i < n; i++) {
			track[a[i]]++;
		}
		int max_count = 0;
		for (int i = 0; i < (int) track.size(); i++) {
			max_count = max(max_count, track[i]);
		}
		for (int i = 0; i < track.size(); i++) {
			if (track[i] != 0 && track[i] != max_count) {
				num = i;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == num) {
				ret = i + 1;
				break;
			}
		}
		cout << ret << endl;
    }
}