#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N=1e5+3;
int n,a[N];

int main(){
    int i,j,m=0,l,r;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>l;
        r=a[l]+1;
        vector<int>v;
        for(j=2;j<=(l/j);j++){
            if((l%j)==0){
                r=max(r,a[j]+1);
                r=max(r,a[(l/j)]+1);
                v.push_back(j);
                v.push_back((l/j));
            }
        }
        a[l]=r;
        for(int x: v) a[x]=a[l];
        m = max(m,a[l]);
    }
    if(m==0) m++;
    cout << m << endl;
    return 0;
}