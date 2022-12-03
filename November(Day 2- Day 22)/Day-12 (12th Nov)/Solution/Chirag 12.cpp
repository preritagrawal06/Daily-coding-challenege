#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,d,i,j,k,sum=0;
    cin>>n>>d;
    int seq[n];
    for(i=0; i<n;i++)
        cin>>seq[i];
    for(i=0;i<n-2;i++) 
    {
        for(j=i+1;j<n-1;j++) 
        {
            if(seq[j]-seq[i]==d) 
            {
                for(k=i+2;k<n;k++)
                {
                    if(seq[k]-seq[j]==d) 
                    {
                        sum++;
                        break;
                    }
                }
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}