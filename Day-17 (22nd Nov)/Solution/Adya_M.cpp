#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    string s;cin>>s;
	    int count=0;
	    int i=0;
	    while(i<n-1)
	    {
	        if(s[i]=='1' && s[i+1]=='0')
	         count++;
	        i++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
