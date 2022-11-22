#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int c=0;
        for(int i=0; i<n-1 ;i++){
            if(s[i] =='1' and s[i+1]=='0')        c++;
        }
        cout<<c<<endl;
    }
	return 0;
}
