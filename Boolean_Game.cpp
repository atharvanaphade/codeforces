#include <bits/stdc++.h>
using namespace std;

typedef long long int          ll;
typedef vector<ll>             vec;
typedef pair<ll,ll >           pll;
typedef vector<ll>::iterator   itr;

#define P                      pair
#define F                      first
#define S                      second 
#define PB                     push_back 
#define POB                    pop_back 
#define EB                     emplace_back
#define MP                     make_pair
#define MOD                    1e9 + 7 
#define INF                    1000000000000000003 
#define PE(a)                  cout << (a) << endl 
#define PS(a)                  cout << (a) << " " 
#define MAX(a, b)              ((a) < (b) ? (b) : (a)) //MIN(3,i++) fail case
#define MIN(a, b)              ((a) > (b) ? (b) : (a)) //MAX(3,i++) fail case
#define ALL(v)                 (v).begin(), (v).end()
#define FOR(a, b, c, s)        for (ll (a) = (b); (a) < (c); (a)+=s)
#define FORL(a, b, c, s)       for (ll (a) = (b); (a) <= (c); (a)+=s)
#define FORR(a, b, c, s)       for (ll (a) = (b); (a) >= (c); (a)-=s)
#define FAST                   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


inline auto solve(){
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> arr(N + 1);
    vector<vector<pll>> arr1(N + 1), dp(N + 1);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < M; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr1.PB(MP(i, c));
    }
    dp[0].PB(MP(0, 0));
    for(int i = 1; i <= N; i++){
        vector<pll> temp;
        temp.insert(temp.end()), temp.ALL(dp[i - 1]);
        set<ll> out;
        int cur = 0, msk = 0;
        for(int j = i; j >= 1; j--){
            cur += arr[j];
            msk ^= 1LL << j;
            for(auto &[idx, z] : arr1[j]){
                if(out.count(idx)){
                    cur += z;
                }else{
                    op.insert(idx);
                }
            }if(j < 1){
                for(auto &[val, old_msk] : dp[j - 2]){
                    temp.PB(MP(val + cur, msk ^ old_msk));
                }
            }else{
                temp.PB(MP(cur, msk));
            }
            sort(ALL(temp));
            reverse(ALL(temp));
            set<ll> arr2;
            int fill = 0;
            for(int j = 0; j < temp.size() and fill < K; j++){
                if(arr2.count(temp[j].S)){
                    continue;
                }
                dp[i].PB(temp[j]);
                fill++;
                arr2.insert(temp[j].S);
            }
        }
        for(int i = 0; i < K; i++){
            cout << dp[N][i].F << " ";
        }
        cout << endl;
    }
}

int main(){
    FAST;
    
    ll t=0;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}

