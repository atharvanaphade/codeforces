#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char s[110][110]; 

void func(int x, int y, int i){
    int dx = 1, dy = 1;
    switch(i){
        case 0: break;
        case 1: dx = -1; break;
        case 2: dy = -1; break;
        case 3: dx = dy = -1; break;
    }
    printf("%d %d %d %d %d %d\n", x, y, x + dx, y, x, y + dy);
	printf("%d %d %d %d %d %d\n", x, y, x, y + dy, x + dx, y + dy);
	printf("%d %d %d %d %d %d\n", x, y, x + dx, y, x + dx, y + dy);
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,m;
		cin>>n>>m;
		for (int i=0;i<n;i++) 
		{
		    cin>>s[i];
		}
		int num=0;
		for (int i=0;i<n;i++) {
		    for (int j=0;j<m;j++)
		    {if (s[i][j]=='1') num++;
		    }
		}
		num*=3;
		cout<<num<<endl;
		for (int i=0;i<n;i++) 
		{
		   for (int j=0;j<m;j++) {
		   if (s[i][j]=='1')
		    {
			int ki=1,kj=1;
			if (i==n-1){
			   ki=-1;
			}
			if (j==m-1) {
			    kj=-1;
			}
			cout<<i+1<<" "<<j+1<<" "<<i+ki+1<<" "<<j+1<<" "<<i+1<<" "<<j+kj+1<<endl;
 
		    cout<<i+1<<" "<<j+1<<" "<<i+ki+1<<" "<<j+kj+1<<" "<<i+1<<" "<<j+kj+1<<endl;
	
	    	cout<<i+1<<" "<<j+1<<" "<<i+ki+1<<" "<<j+1<<" "<<i+ki+1<<" "<<j+kj+1<<endl;
	
		   }
		  }
		}
    }
}