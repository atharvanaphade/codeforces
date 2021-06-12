#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string ch[10] = {"", "", "2", "3", "223", "5", "53", "7", "7222", "7332"};
    int n;
    cin >> n;
    string s, ret = "";
    cin >> s;
    for (auto &i : s){
        ret += ch[i - '0'];
    }
    sort (ret.begin(), ret.end());
    reverse (ret.begin(), ret.end());
    cout << ret;
}