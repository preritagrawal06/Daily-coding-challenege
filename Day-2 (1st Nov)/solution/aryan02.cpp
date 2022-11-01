#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,j,m;
    cin>>n;
    int candle[n];
    for(j=0;j<n;j++)
       cin>>candle[j];
    m=candle[0];
    for(j=0;j<n;j++)
    {
        if(m<candle[j])
           m=candle[j];
    }
    for(j=0;j<n;j++)
    { 
        if(candle[j]==m)
           f++;
    }
    cout<<f<<endl;
    return 0;
}
