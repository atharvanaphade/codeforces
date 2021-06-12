#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n, ret = 0; cin >> n;
        vector<make_pair<int, int>> diff(n);
        for (int i = 0; i < n; i++){
            int start_time, end_time;
            cin >> start_time >> end_time;
            diff.push_back({start_time, end_time - start_time});
        }
        sort(diff.begin(), diff.end());
        int curr = diff[0].first;
        int curr_diff = diff[0].second;
        for (auto i : diff){
            if (i.second >= 0 and curr <= i.first){
                ret++;
            }
            curr = max(curr, i.first);
            curr_diff = max(curr_diff, i.second);
        }
        cout << ret << endl;
    }
}