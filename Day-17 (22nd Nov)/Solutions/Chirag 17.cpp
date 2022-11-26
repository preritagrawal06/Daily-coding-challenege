#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,b=0;
		string f;
		cin>>n;
		getline(cin,f);
		for(i=0;i<n;i++)
		{
			if(f[i]=='1' && f[i+1]=='0')
			   b++;
		}
		cout<<b<<endl;
	}
	return 0;
}
