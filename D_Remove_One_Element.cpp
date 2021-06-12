#include <iostream>
#include <bits/stdc++.h>
#define MAX 2 * 100000
#define MAX2 1000000000

using namespace std;

int main(){
		int count = 0, ans = 0, n, i;
		cin >> n;
		int a[n], l[MAX], r[MAX];
		for (i = 1; i <= n; i++) cin >> a[i]; a[n + 1] = MAX2;
		for (count = 0, i = 1; i <= n; i++) {
			if (a[i] > a[i - 1]) count++;
			else count = 1;
			l[i] = count;
			ans = max (ans, count);
		}
		for (count = 0, i = n; i >= 1; i--){
			if (a[i] < a[i + 1]) count++;
			else count = 1;
			r[i] = count;
		}
		for (int i = 2; i < n; i++) if (a[i - 1] < a[i + 1]) ans = max (ans, l[i - 1] + r[i + 1]);
		cout << ans << endl;
}
