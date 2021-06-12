#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl "\n"
#define FOR(i,a,b) for (int i = a; i <= b; i++)
 
const int MAX = 1e6 + 1;
bool mark[MAX];
 
void sieve(){
    mark[1] = true;
    for(int i=2; i*i<MAX; i++){
        if(!mark[i]){
            for(int j=i*i; j<MAX; j+=i)
                mark[j] = true;
        }
    }
}
 
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
 
        int n; cin>>n;
        sieve();
        while(n--){
            lli k; cin>>k;
            lli root = sqrt(k);
            if(root*root == k && !mark[root]) cout<<"YES\n";
            else cout<<"NO\n";
        }
}
	