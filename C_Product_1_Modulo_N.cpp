#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
    int n;
    cin >> n;

    vector<int> c;
    long long int p = 1;

    for (int i = 0; i < n; i++){
        if (gcd(i, n) == 1){
            c.push_back(i);
            p *= i;
            p %= n;
        }
    }

    if (p != 1){
        vector<int> t;
        for (auto &x : c){
            if (x == p){
                continue;
            }
            t.push_back(x);
        }
        c = t;
    }

    cout << c.size() << endl;
    for (auto &x : c){
        cout << x << " ";
    }
}