#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(pair <int, int> &a, pair <int, int> &b){
	return a.second > b.second;
}

int main(){
    int n, m;
    vector<pair<int, int>> v;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), comp);
    int ret = 0, sum = 0;
    int i = 0;
    while (n >= v[i].first and i < m){
        n -= v[i].first;
        ret +=v[i].first * v[i].second;
        v[i].first = 0;
        ++i;
    }
    if(n and i < m){
        ret += n * v[i].second;
    }
    cout << ret;
}