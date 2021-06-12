#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
    int r;
    string ret;
    cin >> r;
    vector<pair<string, int>> data;
    map<string, int> scores;
    for(int i = 0; i < r; i++){
        string s; int sc;
        cin >> s >> sc;
        if(scores[s]){
            scores[s] += sc;
        }else{
            scores[s] = sc;
        }
        data.push_back({s, sc});
    }
    int maxscore = 0;
    map<string, int>::iterator it;
    for(it = scores.begin(); it != scores.end(); it++){
        maxscore = max(maxscore, it->second);
    }
    vector<string> players;
    map<string,int>::iterator itm;
    for(itm = scores.begin(); itm != scores.end(); itm++){
        if(itm->second == maxscore){
            players.push_back(itm->first);
        }
    }
    map<string, int> table;
    for(int i = 0; i < r; i++){
        if(table[data[i].first]){
            table[data[i].first] += data[i].second;
            if(table[data[i].first] >= maxscore and find(players.begin(), players.end(), data[i].first) != players.end()){
                ret = data[i].first;
                break;
            }
        }else{
            table[data[i].first] = data[i].second;
            if(table[data[i].first] >= maxscore and find(players.begin(), players.end(), data[i].first) != players.end()){
                ret = data[i].first;
                break;
            }
        }
    }
    cout << ret << endl;
}