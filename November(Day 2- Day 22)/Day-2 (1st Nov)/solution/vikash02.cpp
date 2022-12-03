#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,i,max;
    cin>>n;
    int candle[n];
    for(i=0;i<n;i++)
       cin>>candle[i];
    max=candle[0];
    for(i=0;i<n;i++)
    {
        if(max<candle[i])
           max=candle[i];
    }
    for(i=0;i<n;i++)
    { 
        if(candle[i]==max)
           k++;
    }
    cout<<k<<endl;
    return 0;
}