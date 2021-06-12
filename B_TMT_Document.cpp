#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, m = 0, m_allowed = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'T'){
            t++;
        }else{
            m++;
        }
    }
    if(t != m * 2){
        cout << "NO" << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == 'T'){
            t++; m_allowed++;
        }else{
            m_allowed--;
            if(m_allowed < 0){
                cout << "NO" << endl;
                return;
            }
        }
    }
    t = 0;
    m_allowed = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'T'){
            t++;
            m_allowed++;
        }else{
            m_allowed--;
            if(m_allowed < 0){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}