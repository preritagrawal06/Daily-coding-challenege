#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    float l=0,p=0,r=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    while(i<n)
    {
        if(a[i]>0)
           l++;
        else if(a[i]<0)
            p++;
        else
            r++; 
        i++;          
    } 
    cout<<l/n<<endl;
    cout<<p/n<<endl;   
    cout<<r/n<<endl;
}


