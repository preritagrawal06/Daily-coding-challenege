#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=floor(sqrt(b))-ceil(sqrt(a))+1;
        cout<<ans<<endl;
    }
}
