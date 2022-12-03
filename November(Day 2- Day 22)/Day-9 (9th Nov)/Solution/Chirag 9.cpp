#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,d,m,n,j,count=0;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++)
    cin>>s[i];
    cin>>d>>m;
    for(i=0;i<=n-m;i++)
    {
        int sum=0;
        for(j=i;j<i+m;j++)
        {
            sum=sum+s[j];
        }
        if(sum==d){
        count++;}
    }
    cout<<count<<endl;
    return 0;
}