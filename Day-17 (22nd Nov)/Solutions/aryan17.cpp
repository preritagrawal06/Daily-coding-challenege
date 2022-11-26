#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,a=0;
		string s;
		cin>>n>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='1' && s[i+1]=='0')
			   a++;
		}
		cout<<a<<endl;
	}
	return 0;
}
