#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    // int tc;
    // cin >> tc;
    // while(tc--){
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> h(n);
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            h[i].first = temp;
            h[i].second = i + 1;
        }
        vector<pair<int, int>> m;
        for(int i = 0; i < k; i++){
            sort(h.begin(), h.end());
            if(h[n - 1].first <= h[0].first + 1) break;
            --h[n - 1].first;
            ++h[0].first;
            m.push_back(pair<int, int>(h[n - 1].second, h[0].second));
        }
        sort(h.begin(), h.end());
        cout << h[n - 1].first - h[0].first << " " << m.size() << endl;
        for(int i = 0; i < m.size(); i++){
            cout << m[i].first << " " << m[i].second << endl;
        }
    // }
}