#include <iostream>
#include <bits/stdc++.h>
#define im INT_MIN
#define fast ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main(){
    fast;

    
    int tc;
    cin >> tc;
    while(tc--){
        int n;
		cin >> n;
		char a[n][n], rect_v[n][n];
		int i1 = im, j1 = im, i2 = im, j2 = im;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if (a[i][j] == '*' and i1 == im and j1 == im) {
					i1 = i;
					j1 = j;
				}else if (a[i][j] == '*') {
					i2 = i;
					j2 = j;
				}
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if((i == i1 and j == j2) or (i == i2 and j == j1)) {
					rect_v[i][j] = '*';
				}else{
					rect_v[i][j] = a[i][j];
				}
			}
		}
		if(j1 == j2) {
			if(j1 + 1 < n) {
				rect_v[i1][j1 + 1] = '*';
				rect_v[i2][j2 + 1] = '*';
			}else if (j1 - 1 >= 0) {
				rect_v[i1][j1 - 1] = '*';
				rect_v[i2][j2 - 1] = '*';
			}
		}else if (i1 == i2) {
			if(i1 + 1 < n) {
				rect_v[i1 + 1][j1] = '*';
				rect_v[i2 + 1][j2] = '*';
			} else if (i1 - 1 >= 0) {
				rect_v[i1 - 1][j1] = '*';
				rect_v[i2 - 1][j2] = '*';
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << rect_v[i][j];
			}
			cout << endl;
        }
    }
}