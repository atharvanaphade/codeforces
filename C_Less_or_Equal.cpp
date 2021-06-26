#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {
    int i,n,k; cin>>n>>k;
    vector<int> ar(n);
    for(i=0;i<n;++i)
        cin>>ar[i];
    sort(ar.begin(), ar.end());
    if(k==0){
        if((ar[0]-1)!=0)
            cout<<ar[0]-1;
        else
            cout<<"-1";
    }
    else if(k==n)
        cout<<ar[n-1];
    else if(ar[k-1]==ar[k])
        cout<<"-1";
    else
        cout<<ar[k-1];
 
    return 0;
}