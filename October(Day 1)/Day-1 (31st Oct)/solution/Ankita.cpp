#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x;
		y=((x/5)+1)*5;
		if(x<38)
		  cout<<x<<endl;
		else if(y-x<3)
		    cout<<y<<endl;
	    else
		    cout<<x<<endl;		   
	}
	return 0;
}
