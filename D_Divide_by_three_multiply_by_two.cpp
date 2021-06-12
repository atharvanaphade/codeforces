#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long, long long>> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i].second;
    }
    for (int i = 0; i < n; i++){
        long long r = 0, temp = v[i].second;
        while (temp % 3 == 0){
            r++;
            temp /= 3;
        }
        v[i].first = -r;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        cout << v[i].second << " ";
    }
}