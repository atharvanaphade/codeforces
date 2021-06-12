#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort (v.begin(), v.end());
    long double d = 0.0, ret = max(v[0], l - v[n - 1]);
    for (int i = 1; i < n; i++){
        d = max(d, (long double)((v[i] - v[i - 1]) / 2.0));
    }
    cout << fixed << setprecision(10) <<  max(d, ret);
}