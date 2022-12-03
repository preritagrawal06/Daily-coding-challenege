#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    float m,j,k,f=0,g=0,h=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
           f++;
        else if(a[i]<0)
            g++;
        else
            h++;       
    } 
    m=f/n;
    j=g/n;
    k=h/n;
    cout<<m<<endl;
    cout<<j<<endl;   
    cout<<k<<endl;
}


