#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, k, counter = 1;
        string s;
        cin >> n >> k >> s;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                a.push_back(i);
            }
        }
        int last = a[0];
        for (int i = 1; i < a.size(); i++)
        {
            if (i + 1 < a.size() && a[i + 1] - last <= k)
            {
                continue;
            }
            last = a[i];
            counter++;
        }
        cout << counter << endl;;
    }
}