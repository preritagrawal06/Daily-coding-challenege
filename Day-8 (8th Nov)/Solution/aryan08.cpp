#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,f=0,g=0;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		   cin>>a[i][j];
		cout<<endl;   
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			  f+=a[i][j];
			if((i+j)==(n-1)) 
			   s+=a[i][j];
	   }
   }
   cout<<abs(f-s)<<endl;
}
