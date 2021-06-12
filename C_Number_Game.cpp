#include <iostream>
#include <bits/stdc++.h>

const int N = 50000;

using namespace std;

int find_odd_div(int i){
    while (i % 2 == 0){
        i /= 2;
    }
    return i;
}

bool isPrime(int n){
    for(int i = 2; i < min(N, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main(){
    int tc;
    cin >> tc;
    string ash = "Ashishgup", fast = "FastestFinger";
    while (tc--){
        int n;
        cin >> n;
        if (n == 1){
            cout << fast << endl;
            continue;
        }else if (n == 2){
            cout << ash << endl;
            continue;   
        }else if (find_odd_div(n) == 1){
            cout << fast << endl;
            continue;
        }else if (n % 2 == 0 and isPrime(n / 2) and n >= 3){
            cout << fast << endl;
            continue;
        }else {
            cout << ash << endl;
        }
    }
}