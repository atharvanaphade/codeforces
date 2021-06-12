#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    unordered_map<string, int> track;
    for (int i = 0 ; i < n; i++){
        string s;
        cin >> s;
        track[s]++;
        if (track[s] == 1){
            cout << "OK" << endl;
        }else if (track[s] > 1){
            cout << s << to_string(track[s] - 1) << endl;
        }
    }
}