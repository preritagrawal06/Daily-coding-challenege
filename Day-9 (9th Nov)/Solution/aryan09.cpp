#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,d,m,n,j,count=0,sum;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++)
    cin>>s[i];
    cin>>d>>m;
    i=0;
    while(i<=n-m)
    {
         sum=0;
         j=i;
         while(j<i+m)
         {
            sum=sum+s[j];
            j++;
         }
        if(sum==d)
            count++;
       i++;
    }
    cout<<count<<endl;
    return 0;
}
