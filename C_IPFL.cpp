#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, q;
  cin >> n;
  string s;
  cin >> s;
  cin >> q;
  for (int i = 0; i < q; i++){
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1){
      swap (s[a - 1], s[b - 1]);
    }else if (t == 2){
      rotate (s.begin(), s.begin() + n, s.end());
    }
  }
  cout << s;
}